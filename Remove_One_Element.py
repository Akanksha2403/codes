from bisect import bisect_left

def binary_search(arr, low, high, x):
 
    # Check base case
    if high >= low:
 
        mid = (high + low) // 2
 
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
 
        # If element is smaller than mid, then it can only
        # be present in left subarray
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)
 
        # Else the element can only be present in right subarray
        else:
            return binary_search(arr, mid + 1, high, x)
 
    else:
        # Element is not present in the array
        return -1

def func():
    n = int(input())
    vec = [int(x) for x in input().split()]
    kvec = [int(x) for x in input().split()]
    svec = sum(vec)
    skvec = sum(kvec)
    ans = 10e10//1
    for i in range(n):
        if ((skvec - svec + vec[i]) % (n - 1) == 0 and skvec - svec + vec[i] > 0):
            pans = (skvec - svec + vec[i]) // (n - 1)
            ans = min(ans, pans)    
    print(ans)
    
    


t = int(input())
for i in range(t):
    func()