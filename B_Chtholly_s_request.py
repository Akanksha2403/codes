a, b = [int(x) for x in input().split()]
sum = 0
for i in range(1, a+1):
    cp = i
    while(cp != 0):
        i = i*10 + cp%10
        cp = cp//10
    sum += i
print(sum%b)