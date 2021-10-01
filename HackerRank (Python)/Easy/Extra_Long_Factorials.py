def extraLongFactorials(n):
    # Write your code here
    ans=1
    while n>0:
        #print(n)
        ans=ans*n
        n-=1
    print(ans)
    return