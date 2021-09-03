arr = [10, 10, 2, 3, 8, 1, 10, 4]
sum = 0
pref = []
for i in arr:
    pref.append(i + sum)
    sum = sum + i
print(pref)
npref = [i%13 for i in pref]
print(npref)