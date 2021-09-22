
def func( heros, attack, defence):

    tsum = 0
    minc = 100000000000000000000000000
    for i in range(len(heros)):
        tsum += heros[i]
    

    for i in range(len(heros)):
        hdefence = tsum - heros[i]
        hattack = heros[i]
        c = 0
        if (hdefence < defence):
            c += defence - hdefence
        if (hattack < attack):
            c += attack - hattack
        minc = min(minc, c)
    
    print(minc)



    n = int(input())
    vec = [int(x) for x in input().split()]
    for i in range(t):
        defence, att = [int(x) for x in input().split()]
        func(vec, defence, att)
    

