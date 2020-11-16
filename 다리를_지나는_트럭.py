from collections import deque
import time


def totalWeight(arr):
    total = 0
    for v in arr:
        total += v

    return total


def solution(bridge_length, weight, truck_weights):
    answer = 0
    truck_weights = deque(truck_weights)
    onBridge = deque([-1])
    outCheck = deque()

    while onBridge or truck_weights:
        if answer == 0:
            onBridge.popleft()
            answer += 1
        if truck_weights:
            if totalWeight(onBridge) + truck_weights[0] <= weight:
                onBridge.append(truck_weights.popleft())
                outCheck.append(answer)

        if answer == outCheck[0] + bridge_length - 1:
            onBridge.popleft()
            outCheck.popleft()
        answer += 1

    return answer


# print(solution(2, 10, [7,4,5,6]))
print(solution(100, 100, [10]))
