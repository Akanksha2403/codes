def func():
    n = int(input())
    arr = [int(x) for x in input().split()]
    squareroot = int(n**(1/2))
    print(squareroot)
    ans = n-int(squareroot)
    # print(ans)
    return 0

t = int(input())
for i in range(t):
    func()
