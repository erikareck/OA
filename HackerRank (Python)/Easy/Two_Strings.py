def twoStrings(s1, s2):
    # Write your code here
    print(set(s1))
    return 'YES' if set(s1) & set(s2) else 'NO'