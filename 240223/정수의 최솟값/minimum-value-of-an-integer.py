a,b,c = map(int, input().split())
m=a
def min(a,b,c):
    if a>b:
        if b>c:
            m=c
        else:
            m=b
    else:
        if a>c:
            m=c
        else:
            m=a
    return m
print(min(a,b,c))