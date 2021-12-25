arr = [33, 34, 6009, 6009, 6009, 96]
maxi = arr[0]
for i in range(0, len(arr)):
    if maxi < arr[i]:
        maxi = arr[i]

top = 1
x = len(arr)
print(arr.count(max(arr)))
