arr={1,2,3,4,5}

def minmaxsum(arr):
  maxsum = 0
  for i in arr:
    maxsum = maxsum+i
  return(maxsum)

x=minmaxsum(arr)
print(x)