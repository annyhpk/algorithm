def solution(board, moves):
    picked = []
    bomb = []

    for pick in moves:
        for i in range(0, len(board)):
            if board[i][pick - 1] == 0:
                continue
            else:
                picked.append(board[i][pick - 1])
                board[i][pick - 1] = 0
                if len(picked) > 1:
                    if picked[-1] == picked[-2]:
                        bomb.append(picked.pop())
                        bomb.append(picked.pop())
                break

    answer = len(bomb)
    return answer


if __name__ == '__main__':
    board = [
        [0, 0, 0, 0, 0],
        [0, 0, 1, 0, 3],
        [0, 2, 5, 0, 1],
        [4, 2, 4, 4, 2],
        [3, 5, 1, 3, 1]
    ]

    moves = [1, 5, 3, 5, 1, 2, 1, 4]

    result = solution(board, moves)

    print(result)