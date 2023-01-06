from collections import defaultdict

import sys
input =sys.stdin.readline
def rec(s):
    if not s:
        return True
    if len(s)==1:
        return True;         
    if len(s)%2:
        return rec(s[ : -1])
    if s[: len(s)//2]==s[len(s)//2:]:
        return rec(s[:len(s)//2])
    return False            

def solve ():
    n=int( input())
    s=list(input().stip())
    if( rec(s)):
        print("YES")
    else:
        print("NO")

for _ in range (int(input())):
    solve()

                