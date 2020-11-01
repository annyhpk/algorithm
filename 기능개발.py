from math import ceil


def solution(progresses, speeds):
    answer = []
    left = []
    for i in range(len(progresses)):
        left.append(ceil((100 - progresses[i]) / speeds[i]))

    cur = left[0]
    length = len(left)
    count = 1
    for i in range(1, length):
        if cur < left[i]:
            cur = left[i]
            answer.append(count)
            count = 1
        else:
            count += 1
        if i == length - 1:
            answer.append(count)

    return answer

# progresses	            speeds	              return
# [93, 30, 55]	            [1, 30, 5]	        [2, 1]
# [95, 90, 99, 99, 80, 99]	[1, 1, 1, 1, 1, 1]	[1, 3, 2]
