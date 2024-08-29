def val1(x,y):
    a=2
    b=2^x
    c=b^y
    temp =[a,b,c]
    for i in range (len(temp)):
        temp[i]%=2
    if temp.count(0)==1:
        return [2,min(b,c),max(b,c)]   
    return []

def val2(x,y):
    b=2
    a=b^x
    c=b^y
    temp=[a,b,c]        
    for i in range (len(temp)):
        temp[i]%=2
    if temp.count(0)==1:
        return [a,b,c]    
    return []

def val3(x,y):
    c=2
    b=c^y
    a=x^b
    temp=[a,b,c]        
    for i in range (len(temp)):
        temp[i]%=2
    if temp.count(0)==1:
        return [a,b,c]
    return [] 
def solve():
    x,y=list(map(int,input().split()))     
    res=val1(x,y)
    if res:
        res.sort()
        print(*res)
    else:
        res=val2(x,y)
        res.sort()
        if res:
            print(*res)    
        else:
            res=val3(x,y)    
            res.sort()
            if(res):
                print(*res)

t =1
t=int(input())
for _ in range(t):
    solve()


