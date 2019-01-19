T = int(input())
def isboro(f, r, bcount, ocount, ccount):
  for i in range(3):
    if f[i]=='b' or r[i]=='b' or f[i]=='o' or r[i]=='o':
      ccount=ccount+1
      if f[i]=='b' or r[i]=='b':
        bcount=bcount+1
      if f[i]=='o' or r[i]=='o':
        ocount=ocount+1
  return bcount,ocount,ccount
while T:
  T = T - 1
  f = input()
  r = input() 
  bcount, ocount, ccount = 0, 0, 0
  res = isboro(f,r,bcount,ocount,ccount)
  if res[0] >= 2 and res[1] >= 1 and res[2] == 3:
    print("yes")
  else:
    print("no")
