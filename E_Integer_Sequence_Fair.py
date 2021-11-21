mod2 = 998244353


def power(x,  y):
    res = 1
    while (y):
        if (y % 2 == 1):
            res = (res * x) % mod2

        y = y >> 1
        x = (x * x) % mod2
    return res % mod2

n, k, s = [int(x) for x in input().split()]
a = (k**n)%mod2
print(power(s, a))
