def countSwaps(a):
    # Write your code here
    counter=0
    for i in range(len(a)):
        for j in range(len(a)-1):
            if a[j]>a[j+1]:
                counter+=1
                tmp=a[j]
                a[j]=a[j+1]
                a[j+1]=tmp
    print("Array is sorted in "+str(counter)+" swaps.")  
    print("First Element: " + str(a[0]))  
    print("Last Element: " + str(a[len(a)-1]))  
    return