# link: https://vjudge.net/problem/CodeForces-115A/origin
a = int(input())
b = [int(input()) for i in range(a)]
c = 0
for i in range(a):
    f = 0
    while i >= 0:
        i = b[i]-1
        f += 1
    c = max(c, f)
print(c)
