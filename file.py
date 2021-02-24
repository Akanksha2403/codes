m, n = 0,1


sum = 0
def cases(mnew=1, nnew=1, memo={}):
    
    if((mnew, nnew) in memo):
        return memo[(mnew, nnew)]

    
    if(mnew == m or nnew == n):
        memo[(mnew, nnew)] =  1
    
        
    else:
        memo[(mnew, nnew)] = cases(mnew+1, nnew) + cases(mnew, nnew+1)
    return memo[(mnew, nnew)]


print(cases())
