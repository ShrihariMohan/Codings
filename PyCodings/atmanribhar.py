n = int ( input())
req = []
for i in range(n):
    req.append(input().split())
m = int ( input())
country = []
for i in range(m):
    country.append(input().split())

cost1 = 0
cost2 = 0
for i in range(n):
    flag = True
    for j in range(m):
        if ( req[i][0] == country[j][0]):
            flag = False
            if ( int(req[i][1]) > int(country[j][1])):
                cost2 += int(country[j][1])*int(country[j][2])
                cost1 += (int(req[i][1])-int(country[j][1]))*int(req[i][2])
                print(cost1,cost2)               
            elif (int(req[i][1]) < int(country[j][1])):
                cost1 += int(req[i][1])*int(country[j][2])
    if ( flag):
        cost1 += int(req[i][1]) * int ( req [i][2])

print ( cost2 + cost1)