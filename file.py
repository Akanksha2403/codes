file = open("musichandeler.txt")
counter = 0
for i in file:
    counter += 1
    print(i, end= "")
    if(counter % 4 == 0):
        print("Team "+str(counter)+" :-\n")


