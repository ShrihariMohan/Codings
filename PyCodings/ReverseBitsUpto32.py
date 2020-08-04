noOfInputs = int(input())
li = list(map(int, input().split()))

for i in li:
    binNumber = bin(i)[2:]
    binNumber = list(("0" * (32 - len(binNumber)) + binNumber).strip())
    for i in range(32):
        if binNumber[i] == "1":
            binNumber[i] = "0"
        else:
            binNumber[i] = "1"

    binNumber = int("".join(binNumber), 2)
    print(binNumber)
"""
Input/Output 2: 
Input:
2
399861 7

Output: 
4294567434 4294967288 

Explanation: The binary representation of 399861 in 32 bits is 00000000000001100001100111110101. 
After toggling the bits, it becomes 11111111111110011110011000001010. 
The decimal equivalent of the above binary representation is 4294567434. 
So it is printed. 

The binary representation of 7 in 32 bits is 00000000000000000000000000000111. 
After toggling the bits, it becomes 11111111111111111111111111111000. 
The decimal equivalent of the above binary representation is 4294967288.
So it is printed. 

Input/Output 2: 
Input: 
3 
52568330 45 82730988 

Output: 
4242398965 
4294967250 
4212236307

"""