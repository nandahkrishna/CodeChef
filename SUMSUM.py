import math
T = int(input())
while T > 0:
    n = int(input())
    s = 0
    l = n//2
    l = l*(l+1)//2
    l = 2*l
    s = s - l;
    if n % 2 == 1:
        N = n//2 + 1
    else:
        N = n//2
    s = s + N*N
    T = T - 1
    print(s)
