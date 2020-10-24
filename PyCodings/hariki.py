n=int(input())
k=0
m=[]
for i in range(n):
    l=[]
    for j in range(n):
        k=k+1
        l.append(k)
    m.append(l)

print (*m)    
