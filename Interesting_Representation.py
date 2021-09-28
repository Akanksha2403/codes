def func():
    n = int(input())
    if (n % 2 == 0):
        print(n*2, n)
        return 0
            
    primes = [3, 7, 31, 127, 8191, 131071, 524287, 2147483647]
    for i in primes:
        if (n % i == 0):
            continue
        else:
            print(n*(i+1), n*i)
            return 0
    return 0


t = int(input())
for i in range(t):
    func()


