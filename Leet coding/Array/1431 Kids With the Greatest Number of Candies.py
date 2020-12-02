class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_number = max(candies)
        ans_list = []
        for i in range(0,len(candies)):
            if((candies[i]+extraCandies)>=max_number):
                ans_list.append(True)
            else:
                ans_list.append(False)
        return ans_list