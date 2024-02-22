n,m = map(int, input().split())
def fun(n,m):
    num=0
    while True:
        num+=1
        if num%n==0 and num%m==0:
             break
    print(num)
fun(n,m)