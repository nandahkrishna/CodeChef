def findcol(j):
    for _ in range(N):
        if r[_][j]=='1':
            return 1 
    return 0
def findrow(i):
    for _ in range(M):
        if r[i][_]=='1':
            return 1 
    return 0
T = int(input())
while T:
    T = T-1
    l = input().split()
    N,M=int(l[0]),int(l[1])
    ans = [[0 for j in range(M)] for i in range(N)]
    r = []
    found = 0
    for _ in range(N):
        r.append(input())
        for __ in range(M):
            if found==0 and r[_][__]=='1':
                found = 1
    if found==0:
        for _ in range(N):
            for __ in range(M):
                print("-1 ",end="")
            print()
    else:
        for i in range(N):
            for j in range(M):
                if r[i][j]=='1':
                    ans[i][j] = 0
                elif findcol(j) or findrow(i):
                    ans[i][j] = 1 
                else:
                    ans[i][j] = 2
                print(ans[i][j],end=" ")
            print()
