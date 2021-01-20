d = {}
# n = input()
# ls = map(int,input().split())
n=5
ls=[5,5,3,3,5,5]
for i in ls:
    d[i] = d.get(i, 0) + 1 #有几个重复的，有就+1.
    print(d)
a = []
b = []
for j in d.keys():
    if d[j] >= 2: #矩形
        a.append(j)
    if d[j] >= 4: #正方形
        b.append(j)
print(a)
print(b)
a=sorted(a)
b=sorted(b)
if len(a)>=2:
    if not b :
        print(a[-1]*a[-2]) #矩形
    else:
        print(max(a[-1]*a[-2],b[-1]*b[-1])) #正方形
else:
    print(-1)