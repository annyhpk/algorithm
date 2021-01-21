def solution(n, moves):
    current_loc = {
        "row": 1,
        "column": 1
    }

    for m in moves:
        if m == 'L' and current_loc["row"]-1 > 0:
            current_loc["row"] -= 1
        elif m == 'R' and n > current_loc["row"]+1:
            current_loc["row"] += 1
        elif m == 'U' and current_loc["column"]-1 > 0:
            current_loc["column"] -= 1
        elif m == 'D' and n > current_loc["column"]+1:
            current_loc["column"] += 1
        else:
            pass

    return '{0} {1}'.format(current_loc["column"], current_loc["row"])


x = 5
y = ['R', 'R', 'R', 'U', 'D', 'D']

print(solution(x, y))
