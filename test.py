

def solve(a,m,k):
    i,j,res=0,m,0
    while j<=len(a):
        s=set()
        for t in range(i,j):
            if a[t] in s:
                res+=1
                break
            s.add(k-a[t])
        i+=1
        j+=1
    return res