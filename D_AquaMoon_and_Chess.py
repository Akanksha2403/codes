mod2 = 998244353


def ncr(n,  k):

    res = 1
    if (k > n - k):
        return ncr(n, n-k)

    for i in range(k):
        res = res*(n-i)
        res = res//(i+1)

    return res % mod2


def func():
    n = int(input())
    S = input()
    u = 0
    i = 0
    while(i < n-1):
        if (S[i] == '1'):
            if (S[i] == S[i + 1]):
                u += 1
                i += 1
        i+=1

    zeros = 0
    for i in range(n):
        if (S[i] == '0'):
            zeros += 1

    return ncr(zeros + u, zeros)


t = int(input())
for _ in range(t):
    print(func())
        