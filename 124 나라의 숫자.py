from collections import deque


def solution(n):
    answer = deque()

    while n:
        m = n % 3
        if m > 0:
            answer.appendleft(m)
            n //= 3
        else:
            answer.appendleft(4)
            n = n // 3 - 1

    return ''.join(map(str, answer))

# n	result
# 1	1
# 2	2
# 3	4
# 4	11
