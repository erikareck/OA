def sockMerchant(n, ar):
    # Write your code here
    record={}
    for s in ar:
        if s not in record:
            record[s]=1
        else:
            record[s]=record[s]+1
    pair=0
    for r in record:
        #print(record[r])
        pair+=record[r]//2
    return pair