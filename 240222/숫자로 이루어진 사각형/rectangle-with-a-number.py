N=int(input())
def sq(N):
    cnt=0
    for _ in range(0,N):
        for _ in range(0,N):
            cnt+=1
            if cnt%10==0:
                cnt+=1
            print(cnt%10, end=' ')
        print()
sq(N)