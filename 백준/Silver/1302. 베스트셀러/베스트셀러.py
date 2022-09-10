import sys
N = int(input())
B_dict = {}
for i in range(N):
    book = input().rstrip()
    if book not in B_dict:
        B_dict[book] = 0 
    B_dict[book] += 1
B_dict = sorted(B_dict.items())
print(sorted(B_dict, key = lambda x:x[1], reverse = True)[0][0])