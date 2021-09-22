string = input()
s = input()
length = len(s)
counter = 0

for i in range(len(string)-length+1):
    if(string[i:i+length] == s):
        counter +=1
print(counter)

