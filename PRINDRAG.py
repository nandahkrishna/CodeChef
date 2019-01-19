import itertools
T = int(input())
while T > 0:
    T = T - 1 
    S = input().split()
    N, P = int(S[0]), int(S[1])
    S = [int(x) for x in input().split()]
    xx = list(itertools.permutations(S))
    Pc = [0 for _ in range(N)]
    PPc = []
    for i in range(N):
        maxd,count = 0,0
        PPc = []
        for x in xx:
            PPc = []
            count = 0
            Pc[i] = x[i]
            j = i-1
            while j >= 0:
                Pc[j] = Pc[j+1]+x[j]
                j = j - 1
            j = i+1
            while j < N:
                Pc[j] = Pc[j-1]+x[j]
                j = j + 1
            for j in range(N):
                PPc.append(P-Pc[j])
                if PPc[j]<=0:
                    count=count+1
            if count > maxd:
                maxd = count
        print(maxd,end=" ")
    print()
