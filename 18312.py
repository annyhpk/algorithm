import sys


def timeToString(t):
    if 0 < t < 10:
        return '0' + str(t)
    else:
        return str(t)


def solution(n, k):
    count = 0
    k = str(k)

    for h in range(n + 1):
        hh = timeToString(h)
        for m in range(60):
            mm = timeToString(m)
            for s in range(60):
                ss = timeToString(s)
                if k in hh + mm + ss:
                    count += 1

    print(count)


N, K = map(int, sys.stdin.readline().split())

if 0 <= N <= 23 and 0 <= K <= 9:
    solution(N, K)
