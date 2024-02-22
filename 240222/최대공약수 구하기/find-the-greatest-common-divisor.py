n,m = map(int, input().split())
def fun1(n,m):
    min=0
    if n>m:
        min=m
    else: 
        min=n
    for i in range(1,min+1):
            if n%i==0 and m%i==0:
                result=i
    print(result)
fun1(n,m)