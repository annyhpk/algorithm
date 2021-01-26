from collections import deque

def bfs(graph, start, visited):
  queue = deque([start])
  visited[start] = True

  while queue:
    
    v = queue.pop()
    print(v, end=' ')

    for node in graph[v]:
      if not visited[node]:
        queue.appendleft(node)
        visited[node] = True


graph = [
    [],  # root_node
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * len(graph)

bfs(graph, 1, visited)