import time

from depthai_ros_msgs.action import RecordTrigger

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

class RecordActionServer(Node):

    def __init__(self):
        super().__init__('record_action_server')

        self._action_server = ActionServer(
            self,
            RecordTrigger,
            'recorder',
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        """Accept or reject a client request to begin an action."""
        # This server allows multiple goals in parallel
        self.get_logger().info('Received goal request')
        print(goal_request)
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        """Execute a goal."""
        self.get_logger().info('Executing goal...')

        # Append the seeds for the Fibonacci sequence
        currTime = self.get_clock().now()
        duration = goal_handle.request.duration
        feedback_duration = goal_handle.request.feedback_duration
        while True:
            # TODO: Add actual logging stuff here.
            time.sleep(feedback_duration)
            feedback_msg = RecordTrigger.Feedback()
            time_diff = self.get_clock().now() - currTime
            print("Recording In progress....")
            feedback_msg.time_elapsed = int(time_diff.nanoseconds / 1e9)
            goal_handle.publish_feedback(feedback_msg)
            
            if int(time_diff.nanoseconds / 1e9) > duration:
                break

        goal_handle.succeed()

        retrun_result = RecordTrigger.Result()
        retrun_result.result = "Result checked"

        """ feedback_msg = Fibonacci.Feedback()
        feedback_msg.sequence = [0, 1]

        # Start executing the action
        for i in range(1, goal_handle.request.order):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return Fibonacci.Result()

            # Update Fibonacci sequence
            feedback_msg.sequence.append(feedback_msg.sequence[i] + feedback_msg.sequence[i-1])

            self.get_logger().info('Publishing feedback: {0}'.format(feedback_msg.sequence))

            # Publish the feedback
            goal_handle.publish_feedback(feedback_msg)

            # Sleep for demonstration purposes
            time.sleep(1)

        goal_handle.succeed()

        # Populate result message
        result = Fibonacci.Result()
        result.sequence = feedback_msg.sequence """

        self.get_logger().info('Returning result: {0}'.format(retrun_result.result))

        return retrun_result


def main(args=None):
    rclpy.init(args=args)

    record_action_server = RecordActionServer()

    rclpy.spin(record_action_server)

    # minimal_action_server.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()