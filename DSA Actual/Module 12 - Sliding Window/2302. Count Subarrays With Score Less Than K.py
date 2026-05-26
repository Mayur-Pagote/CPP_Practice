class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        total = 0
        count = 0
        i = 0
        for j in range(len(nums)):
            total += nums[j]

            while total* (j - i + 1) >= k:
                total -= nums[i]
                i += 1
            count += (j-i+1)
           
        return count
