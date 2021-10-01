def timeConversion(s):
    a = s.split(':')
    h = a[0]
    m = a[1]
    s = a[2]
    #print(s)
    hr = int(h)
    if(s[2]=='A'):
        if (hr==12): h = "00"
        return h + ':' + m + ':' + s[0:2]
    else:
        if (hr<12): hr += 12
        return str(hr)+ ':' + m + ':' + s[0:2]