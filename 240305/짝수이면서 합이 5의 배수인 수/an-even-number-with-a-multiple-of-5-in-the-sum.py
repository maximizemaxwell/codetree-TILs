n = int(input())
def august(n):
    return n%2==0 and (n//10+n%10)%5==0
if august(n):
    print('Yes')
else:
    print('No')