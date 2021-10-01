def rotLeft(a, d):
    # Write your code here
    ans=[]
    for i in range(d, len(a)):
        ans.append(a[i])
        
    for j in range(0, d):
        ans.append(a[j])
        
    print(ans)
    return ans