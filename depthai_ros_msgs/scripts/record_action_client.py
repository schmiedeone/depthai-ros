from depthai_ros_msgs.action import RecordTrigger

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node


class RecordActionClient(Node):

    def __init__(self):
        super().__init__('minimal_action_client')
        self._action_client = ActionClient(self, RecordTrigger, 'recorder')

    def cancel_done(self, future):
        cancel_response = future.result()
        if len(cancel_response.goals_canceling) > 0:
            self.get_logger().info('Goal successfully canceled')
        else:
            self.get_logger().info('Goal failed to cancel')

        rclpy.shutdown()

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self._goal_handle = goal_handle

        self.get_logger().info('Goal accepted :)')

        # Start a 2 second timer
        # self._timer = self.create_timer(2.0, self.timer_callback)

    def feedback_callback(self, feedback):
        self.get_logger().info('Received feedback: {0}'.format(feedback.feedback.time_elapsed))

    def timer_callback(self):
        self.get_logger().info('Canceling goal')
        # Cancel the goal
        future = self._goal_handle.cancel_goal_async()
        future.add_done_callback(self.cancel_done)

        # Cancel the timer
        # self._timer.cancel()

    def send_goal(self):
        self.get_logger().info('Waiting for action server...')
        self._action_client.wait_for_server()

        goal_msg = RecordTrigger.Goal()
        goal_msg.start_record = True
        goal_msg.duration = 10
        goal_msg.feedback_duration = 1
        # goal_msg.topic_list = True
        

        self.get_logger().info('Sending goal request...')

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)


def main(args=None):
    rclpy.init(args=args)

    action_client = RecordActionClient()

    action_client.send_goal()

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()