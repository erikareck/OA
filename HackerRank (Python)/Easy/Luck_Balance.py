def luckBalance(k, contests):
    # Write your code here
    num_1=0
    listWin=[]
    listDeduct=[]
    listNoMatter=[]
    for c in contests:
        if c[1]==1:
           num_1+=1
           listWin.append(c[0])
        else:
            listNoMatter.append(int(c[0]))
    n_win=num_1-k
    ans=0
    if n_win<=0:
        for c in contests:
            ans+=c[0]
        return ans
    else:
        for i in range(n_win):
            tmp=min(listWin)
            listDeduct.append(int(tmp))
            listWin.remove(int(tmp))
    print(listWin)
    print(listDeduct)
    print(listNoMatter)
    ans = sum(listNoMatter)-sum(listDeduct)+sum(listWin)
    return ans