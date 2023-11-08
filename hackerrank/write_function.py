# link: https://vjudge.net/problem/HackerRank-write-a-function/origin
def is_leap(year: int) -> bool:
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return True
    return False
