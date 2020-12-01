class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum_of_list = []
        sum = 0
        for i in nums:
            sum = sum + i
            sum_of_list.append(sum)
        return sum_of_list