# -*- coding: utf-8 -*-
"""
Created on Thu Feb  1 16:29:33 2024

@author: Srijan Mukhopadhyay
"""

class Solution(object):
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        # Start with the square root of the area and find the factors
        sqrt_area = int(area**0.5)
        while area % sqrt_area != 0:
            sqrt_area -= 1

        # Return the factors as [length, width]
        return [area // sqrt_area, sqrt_area]