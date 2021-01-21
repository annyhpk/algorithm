import sys


def solution(hero, field):
    shore = sum(map(lambda line: line.count(0), field))
    total_shore = shore

    check_map = [[hero[1], hero[0]]]

    while shore != 0:
        check = 0
        for i in list(range(hero[2], 4)) + list(range(0, hero[2])):
            directions = {
                0: [hero[1] - 1, hero[0]],
                1: [hero[1], hero[0] - 1],
                2: [hero[1] + 1, hero[0]],
                3: [hero[1], hero[0] + 1],
                "move": [-1, -1, 1, 1]
            }
            if field[directions[i][0]][directions[i][1]] != 1:
                if [directions[i][0], directions[i][1]] not in check_map:
                    shore -= 1
                    if i == 0 or i == 2:
                        hero[1] += directions["move"][i]
                    else:
                        hero[0] += directions["move"][i]
                    check_map.append([hero[1], hero[0]])
                    hero[2] = i
                    break
                else:
                    check += 1
                    continue
            else:
                check += 1
                continue

        if check == 4:
            if hero[2] == 0 or hero[2] == 2:
                hero[1] -= directions["move"][hero[2]]
                if field[hero[1]-directions["move"][hero[2]]][hero[0]] == 1:
                    break
            else:
                hero[0] -= directions["move"][hero[2]]
                if field[hero[1]][hero[0]-directions["move"][hero[2]]] == 1:
                    break

    print(total_shore - shore + 1)


field = []
fieldSize = list(map(int, sys.stdin.readline().split()))
hero = list(map(int, sys.stdin.readline().split()))
for j in range(fieldSize[0]):
    field.append(list(map(int, sys.stdin.readline().split())))


solution(hero, field)