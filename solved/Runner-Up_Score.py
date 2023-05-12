# link: https://vjudge.net/problem/HackerRank-find-second-maximum-number-in-a-list/origin
if __name__ == '__main__':
    n = int(input())
    data = map(int, input().split())

    data = sorted(set(data))
    print(data[-2])
