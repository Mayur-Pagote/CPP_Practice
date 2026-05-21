length = int(input())
nums = list(map(int, input().split()))
target = int(input())
min_count = length + 1
i = 0
j = 0
sum_var = 0
while j < length and i < length:
    sum_var += nums[j]
    if sum_var >= target:
        temp = j - i + 1
        min_count = min(min_count, temp)
        while sum_var >= target:
            sum_var -= nums[i]
            i += 1
        temp = j - i + 2
        min_count = min(min_count, temp)
    j += 1

if min_count == len(nums) + 1:
    print(0) 
else:
    print(min_count)
