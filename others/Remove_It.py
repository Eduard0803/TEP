# link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
n, x = map(int, input().split())
a = list(map(int, input().split()))
for i in a:
    if i != x:
        print(i, end=' ')
print()
