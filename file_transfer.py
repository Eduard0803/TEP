def file_transfer(file_path: str, judges: list[str]) -> None:
    import shutil

    with open(file_path, 'r') as file:
        for line in file:
            for judge in judges:
                if judge in line.lower():
                    shutil.move(file_path, judge+"/")
                    break


def file_search(path: str) -> None:
    import os

    judges = ["codeforces", "atcoder", "beecrowd", "hackerrank", "uva", "spoj", "cses", "codechef"]

    for judge in judges:
        if not os.path.exists(judge):
            os.mkdir(judge)

    files = os.listdir(path)
    for file_path in files:
        file_transfer(path+file_path, judges)


if __name__ == '__main__':
    file_search("solved/")
