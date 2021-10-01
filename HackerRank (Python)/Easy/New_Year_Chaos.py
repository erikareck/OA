def minimumBribes(q):
    # Write your code here

    moves = 0 
    Q=q
    Q = [P-1 for P in Q]
    #print(Q)
    for i,P in enumerate(Q):
        #print(Q)#value
        #print(i)#index 
        #print(P)
        if P - i > 2:
            print("Too chaotic")
            return

        for j in range(max(P-1,0),i):
            if Q[j] > P:
                moves += 1
    print(moves)