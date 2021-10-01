def flippingBits(n):
    # Write your code here
    store=[]
    tmp=n
    if tmp==0:
        store.append(1)
    while tmp>=1:
        m=tmp%2
        if m==0:
            store.append(1)
        elif m==1:
            store.append(0)
        tmp=(tmp-tmp%2)//2
    while len(store)!=32:
        store.append(1)
    print(store)
    sum=0
    for index,value in enumerate(store):
        print(index)
        sum=sum+pow(2,index)*value
    return sum