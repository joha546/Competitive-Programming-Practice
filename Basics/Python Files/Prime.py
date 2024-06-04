n=int(input())

def is_prime(n):
    if(n<=1):
        return False
    else:
        for i in range(2,(n**0.5)+1):
            if(n%i==0):
                return False
            
        return True
for i in range(1,n+1):
    if is_prime(i):
        print(i,end=" ")