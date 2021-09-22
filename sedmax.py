def sedmax1(arr, len):
    sets = set()
    def sedmax(arr, len):
        if(len == 1):
            return None
        sets.add(max(arr)-min(arr))
        sedmax(arr[1:], len-1)
        sedmax(arr[:len-1], len-1)
        
    sedmax(arr, len)
    print(len(sets))

n = int(input())
for i in range(n):
    length = int(input())
    arr = [int(x) for x in input().split()]
    sedmax1(arr, length)