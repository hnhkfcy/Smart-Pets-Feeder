m,n = map(int, input().strip().split(' '))
res = []
for i in range(m):
    w, v = map(float, input().strip().split(' '))
    res.append([w,v])

new_list = sorted(res, key=lambda k: k[0], reverse=False)
# new_list = [[5.0, 16.0], [8.0, 15.0], [9.0, 1.0]]
max = 0
i = 0
for item in new_list:
    if item[0]<=n:
        max += item[1]
        i = i+1
        n = n-item[0]
    if i == m:
        break
print(max)