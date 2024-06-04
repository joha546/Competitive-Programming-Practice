n,a,b=map(int,input().split())

def sat(i):
    s = sum(int(digit) for digit in str(i))
    if(a<=s<=b):
        return True
    else:
        return False
def SomeSum(n):
    s=0
    for i in range(1,n+1):
        if sat(i):
            s +=i
    print(s)

SomeSum(n)

            

'''i = int(input())
s = sum(int(digit) for digit in str(i))
print(s)
'''