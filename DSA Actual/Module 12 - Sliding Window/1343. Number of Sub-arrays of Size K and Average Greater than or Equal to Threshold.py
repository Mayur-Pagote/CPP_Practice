class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        total = sum(arr[:k])
        count = 0

        if total >= k * threshold:
            count += 1
        
        i = 0
        length = len(arr)
        for j in range(k, length):
            total -= arr[i]
            total += arr[j]
            i += 1
        
            if total >= k * threshold:
                count += 1

        return count 
