a,b,c,d=map(int,input().split())

def Compare(a,b,c,d):
    S1=a**b
    S2=c**d
    if(S1>S2):
        print("YES")
    else:
        print("NO")

Compare(a,b,c,d)


# For avoiding TLE

import math

def compare(a, b, c, d):
    lS1 = b * math.log(a)
    lS2 = d * math.log(c)
    if lS1>lS2:
        print("YES")
    else:
        print("NO")

compare(a, b, c, d)
