a,b=map(int,input().split())

def is_lucky(i):
    s=str(i)
    for d in s:
        if d not in '47':
            return False
    return True

def find_lucky(a,b):
    lucky_numbers=[]
    for i in range(a,b+1):
        if is_lucky(i):
            lucky_numbers.append(i)
    return lucky_numbers
lucky=find_lucky(a,b)

if lucky:
    print(" ".join(map(str,lucky)))
else:
    print(-1)