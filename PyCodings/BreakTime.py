#Your code below
breaks = int ( input() )
li = []

for i in range ( breaks ):
    li.append(input().split())
    
totalInterval = 0

for i in range(breaks-1):
    startIntHr , startIntMins = map ( int , li[i][1].split(':') )
    endIntHr , endIntMins = map ( int , li[i+1][0].split(':') )
    totalInterval += (endIntHr*60 + endIntMins) - (startIntHr*60 + startIntMins) 

hour = totalInterval // 60 ;
mins = totalInterval - hour*60 ;
word = ' Hours '
if ( hour == 1 ) : word = ' Hour '
print ( str(hour) + word + str(mins) + ' Minutes'  )    

    