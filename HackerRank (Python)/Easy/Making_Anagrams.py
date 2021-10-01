def makeAnagram(a, b):
    # Write your code here
    Ca=Counter(a)
    Cb=Counter(b)
    sub=Ca.subtract(Cb)
    for i in Ca.values():
        print(i)
    return sum(abs(i) for i in Ca.values())