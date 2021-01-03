class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        wealth_array = []
        for i in accounts:
            wealth = 0 
            for j in i:
                wealth =  wealth + j
            wealth_array.append(wealth)
        return max(wealth_array)