# link: https://www.hackerrank.com/challenges/a-very-big-sum/problem
_ = int(input())
r = 0
n = input().split()
for i in n:
    r += int(i)
print(r)
