def maximumToys(prices, k):
    # Write your code here
    item=0
    
    while k>min(prices):
        min_object=min(prices)
        if k>=min_object:
            k=k-min_object
            item+=1
            prices.remove(min_object)
    return item