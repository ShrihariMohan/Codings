n = int ( input())
hashy = [0] * 26
for i in range(n*(n-1)//2):
    li = input().split()
    team1 = li[0]
    team2 = li[1]
    score1 = li[2][0]
    score2 = li[2][2]
    if ( score1 > score2): 
        hashy[ord(team1)-65] += 3
    elif ( score1 < score2):
        hashy[ord(team2)-65] += 3
    else:
        hashy[ord(team1)-65] += 1
        hashy[ord(team2)-65] += 1

out = hashy.index(max(hashy))            
print ( chr ( out + 65))
print( max(hashy))