#Your code below
n = int ( input() )
li = input().split() 

number = "0123456789"
count = 0 

for i in range ( n ):
    for j in range ( i+1 , n):
        temp = li[i] + li[j] 
        if ( number ==  ( ''.join(sorted(set((temp)))))):
            count += 1
            
print(count)            