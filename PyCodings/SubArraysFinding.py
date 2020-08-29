firstString = input().strip()
secondString = input().strip()
length = int ( input() )
flag = True

listOfpossiblities = []
for i in range(len(firstString) - length + 1):
    if ( firstString[i:i+length] in secondString):
        listOfpossiblities.append( firstString[ i:i+length ])
        flag = False

print(*sorted(listOfpossiblities) , end ='')
if ( flag ) :
    print(-1)

"""
Example Input/Output 1: 
Input: 
telephone 
phone 
3 

Output: 
hon one pho 

Explanation: Here X = 3. 
The common substring values of length 3 in the string values telephone and phone 
are pho, hon and one. 
After sorting the common substring values in ascending order, 
the substring values become hon, one and pho. 

Example Input/Output 2: 
Input: 
ENVIRONMENT 
education 
2 

Output: 
-1
"""    