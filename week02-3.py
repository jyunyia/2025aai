#Leetcode 1. two sum
#有一堆數字nums裡面哪兩個相加，是target
#nums{i}+nums{j}==target 找到i&j使得加起來是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子"，裡面放{出現過的數字}
        #我們想要湊出target這個加總
        for i, num in enumerate(nums):
            other =target-num#另外一個需要的數[可以湊出target的](target-num)
            if target-num in box:#在箱子裡有一個需要的數
                return[ box[other],i]#找到答案
            else:#如果沒有合適的數字能湊
                box[num]=i  #就把現在num的數字，放在BOX裡面
