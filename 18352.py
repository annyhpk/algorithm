from collections import deque
import sys

N, M, K, X = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(N + 1)]

for _ in range(M):
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)

distance = [-1] * (N + 1)
distance[X] = 0


def bfs(x):
    q = deque()
    q.append(x)

    while q:
        node = q.popleft()
        for path in graph[node]:
            if distance[path] == -1:
                distance[path] = distance[node] + 1
                q.append(path)


bfs(X)

check = False
for i in range(1, N + 1):
    if distance[i] == K:
        print(i)
        check = True

if not check:
    print(-1)
