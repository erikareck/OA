def alternatingCharacters(s):
    # Write your code here
    current=''
    delete=0
    for c in s:
        if current=='':
            current=c
            continue
        elif c==current:
            delete+=1
        else:
            current=c
    return delete