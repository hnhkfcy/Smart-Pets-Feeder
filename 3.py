from collections import defaultdict
import heapq

# n = int(input())
n = 5
# l = list(map(int, input().strip().split(' ')))
l =[5,5,5,5,4]
q = []
heapq.heapify(q)
c = defaultdict(list)       # lists of indeces
for idx, item in enumerate(l):
    c[item].append(idx)
# c = {5:[0,1,2,3], 4:[4]}
for k in c:
    heapq.heapify(c[k])
    if len(c[k]) >= 2:  # ignore less than 1
        heapq.heappush(q, k)

while q:
    t = heapq.heappop(q)
    re = heapq.heappop(c[t])    # get first index of t in l
    l[re] = 'a'     # set re in l to 'a'
    n = heapq.heappop(c[t]) # get second index of t in l
    l[n] *= 2      
    if len(c[t]) >= 2:      # if more than 2 add to q
        heapq.heappush(q, t)

    if t * 2 in c:      # if *2 
        heapq.heappush(c[t * 2], n)
    else:
        c[t * 2] = [n]
        heapq.heapify(c[t * 2])

    if (len(c[t * 2]) >= 2) and ((t * 2) not in q):
        heapq.heappush(q, t * 2)

print(' '.join([str(i) for i in l if i != 'a']))