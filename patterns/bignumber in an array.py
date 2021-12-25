arr = [33,34,6009,96]
max = arr[0]
for i in range(0,len(arr)):
  if max<arr[i]:
    max= arr[i]
print(max)