
def ncr(n, r):
    ans = 1
    nmr = n - r
    while (True):
        if (n == 0):
            return ans
        while (r != 0 and ans % r == 0):
            ans = ans // r
            r = r -1
        while (nmr != 0 and ans % nmr == 0):
            ans = ans // nmr
            nmr = nmr -1
        ans = ans * n
        n = n-1

def func():
    a = int(input())
    vec = list()
    for i in range(a+1):
        vec.append(ncr(a, i))
    if (a + 1 % 2):
        for i in range(1, a):
            if (i >= a - i):
                break
            vec[i]+= 1
            vec[a - i] -= 1
    vec.sort()
    for i in vec:
        print(i, end = ' ')
    print()
    return 0

t = int(input())
for i in range(t):
    func()
