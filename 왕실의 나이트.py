import sys


def solution(cur_loc):
    case = 0
    cur_loc = {
        "row": ord(cur_loc[0]) - 96,
        "column": int(cur_loc[1])
    }

    for i in [1, -1]:
        if 0 < cur_loc["row"] + 2 < 9 and 0 < cur_loc["column"] + i < 9:
            case += 1
        if 0 < cur_loc["row"] - 2 < 9 and 0 < cur_loc["column"] + i < 9:
            case += 1
        if 0 < cur_loc["row"] + i < 9 and 0 < cur_loc["column"] + 2 < 9:
            case += 1
        if 0 < cur_loc["row"] + i < 9 and 0 < cur_loc["column"] - 2 < 9:
            case += 1

    print(case)


location = str(sys.stdin.readline())

solution(location)
