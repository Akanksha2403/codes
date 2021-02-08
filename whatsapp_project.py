def func():
    n = int(input())
    rnum, lnum = None, None
    num = None
    for i in range(n):
        str, num = input().split()
        num = int(num)
        if(str == 'R'):
            if rnum is None: rnum = num
            if rnum < num: rnum = num
        else:
            if lnum is None: lnum = num
            if lnum > num: lnum = num
    if(lnum is None or rnum is None or lnum - rnum - 1 < 1):
            print("-1")
    else:
        print(lnum - rnum - 1)

test_cases = int(input())


for i in range(test_cases):
    func()
