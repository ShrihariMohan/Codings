first , second = map ( int , input().split() )
first = bin(first)[2:]
second = bin(second)[2:]
proceed = True 

if ( len(first) < len(second) ):
    print('NO')
    proceed = False 
    
if ( proceed ):
    if ( first.count('1') == second.count('1')):
        print('YES')
    else: print('NO')

"""
Sample 1
Input: 10 3 
Output: YES 
Explanation: 
The binary representation of 10 is 1010. 
The binary representation of 3 is 11. 
Here 1010 can be rearranged as 0011. 
Here both 0011 and 11 represent the decimal value 3. 
So YES is printed as the output.

Sample 2
Input: 14 26 
Output: NO 
Explanation: 
The binary representation of 14 is 1110. 
The binary representation of 26 is 11010. 
Here 1110 cannot be rearranged as 11010. 
So NO is printed as the output.

"""
    

