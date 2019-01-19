l = input().split()
P,S = int(l[0]),int(l[1])
d = dict()
pn = []
for p in range(0,P):
    sc = []
    ns = []
    sc = [int(n) for n in input().split()]
    ns = [int(n) for n in input().split()]
    d = dict()
    for i in range(S):
        d[sc[i]]=ns[i]
    scs = []
    scs = sorted(d.keys())
    nss = []
    nss = [d[s] for s in scs]
    n = 0
    for i in range(S-1):
        if(nss[i]>nss[i+1]):
            n=n+1 
    pn.append(n)
f = dict()
for i in range(P):
    f[i+1] = pn[i]
final = sorted(f, key = f.__getitem__)
for _ in final:
    print(_)
