# link: https://vjudge.net/problem/AtCoder-abc186_c/origin

n = int(input())
s1 = str(n)
s2 = str(oct(n))

count = 0

for i in range(1, n+1):
    s1 = str(i)
    s2 = str(oct(i))
    if '7' in s1 or '7' in s2:
        count += 1

print(n-count)
