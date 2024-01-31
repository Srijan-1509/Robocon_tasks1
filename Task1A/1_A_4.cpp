class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        # Initialize variables to keep track of the robot's position
        x, y = 0, 0

        # Iterate through each move in the sequence
        for move in moves:
            # Update the position based on the move
            if move == 'R':
                x += 1
            elif move == 'L':
                x -= 1
            elif move == 'U':
                y += 1
            elif move == 'D':
                y -= 1

        # Check if the final position is at the origin (0, 0)
        return x == 0 and y == 0

# Example usage:
solution = Solution()
print(solution.judgeCircle("UDLR"))  # Output: True
print(solution.judgeCircle("UDLRUDLR"))  # Output: True
print(solution.judgeCircle("UDL"))  # Output: False

