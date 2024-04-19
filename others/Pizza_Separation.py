# link: https://codeforces.com/problemset/problem/895/A
n = int(input())
p = list(map(int, input().split()))
out=b=sum(p)
for x in range(n):
    for y in range(x, n+1):
        v=sum(p[x:y])
        r=abs(b-2*v)
        if r<out:
            out=r
print(out)
