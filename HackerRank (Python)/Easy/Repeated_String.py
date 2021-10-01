def repeatedString(s, n):
    # Write your code here
    count=0;
    for i in s:
        if i=='a':
            count+=1
            
    count=count*(n//len(s))
    remain=n%len(s)
    
    for i in range(remain):
        if s[i]=='a':
            count+=1
            
    return count