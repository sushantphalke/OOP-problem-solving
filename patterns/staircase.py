n = 6
for i in range(n):
    for j in range(n+1):
        if j >= n-i:
            print("#", end="")
        else:
            print(end="_")
    print('  ')
