def bestsum(targetSum, numbers, memo={}):
    if(targetSum in memo):return memo[targetSum]
    if(targetSum == 0):return []
    if(targetSum < 0):return None
    
    shortestCombination = None

    for num in numbers:
        remainder = targetSum - num
        remainderCombination = bestsum(targetSum - num, numbers, memo)
        if remainderCombination != None:
            combination = remainderCombination[:]
            combination.append(num)
            if(shortestCombination is None or len(shortestCombination) > len(combination)):
                shortestCombination = combination

    memo[targetSum] = shortestCombination
    return shortestCombination


print(bestsum(int(input()),[int(x) for x in input().split()]))





