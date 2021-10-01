def hourglassSum(arr):
    # Write your code here
    sum_list=[]
    for i in range(4):
        for j in range(4):
            '''
            print(arr[i][j])
            print(arr[i][j+1])
            print(arr[i][j+2])
            print(arr[i+1][j+1])
            print(arr[i+2][j])
            print(arr[i+2][j+1])
            print(arr[i+2][j+2])
            '''
            tmp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+\
            arr[i+1][j+1]+\
            arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
            #print(tmp)
            sum_list.append(tmp)
    
    return max(sum_list)