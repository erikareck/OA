from collections import Counter
def checkMagazine(magazine, note):
    # Write your code here
    a=Counter(magazine)
    b=Counter(note)
    # a & b - a intersection b
    #print(a)
    #print(b)
    #print (a&b)
    if (a&b)==b:
        print("Yes")
    else:
        print("No")