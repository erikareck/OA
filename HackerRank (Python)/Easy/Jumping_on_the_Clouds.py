def jumpingOnClouds(c):
    # Write your code here
    jump=0
    i=0
    if len(c)==2:
        return 1
    while i+2 < len(c): 
        if c[i+2]==0:
            i+=2
        else:
            i+=1
        jump+=1
    if i!=len(c)-1:
        jump+=1        
    return jump