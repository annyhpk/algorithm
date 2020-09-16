from collections import deque


def solution(prices):
    answer = []
    p_len = len(prices) - 1
    compare = deque(range(p_len))
    c_len = len(compare)

    for i in range(p_len):
        for j in range(c_len):
            if prices[i] > prices[i + j + 1]:
                answer.append(j + 1)
                break
            elif j == c_len - 1:
                answer.append(p_len - i)
        compare.popleft()
        c_len -= 1
        if not compare:
            answer.append(0)
            break

    return answer
