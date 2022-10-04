t =int(input())
while t:
    a = input()
    b = input()
    d={}
    d[a[0]] = 1
    try:
        d[b[0]]+=1
    except:
        d[b[0]] = 1
    try:
        d[b[1]]+=1
    except:
        d[b[1]] = 1
    try:
        d[a[1]]+=1
    except:
        d[a[1]] = 1
    l = len(d)
    print(l-1)
    t-=1