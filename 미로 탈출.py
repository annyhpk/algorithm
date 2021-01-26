from collections import deque

x = 5
y = 6

board = [
  [1,0,1,0,1,0],
  [1,1,1,1,1,1],
  [0,0,0,0,0,1],
  [1,1,1,1,1,1],
  [1,1,1,1,1,1]
]

def bfs():
  loc = [0, 0]
  count = 0
  queue = deque([0])

  while loc == [4, 5]:
    v = queue.pop()

    for i, node in enumerate(board[v][loc[1]:]):
      count += 1 
      if node == 1 and board[v+1][i] == 1:
        queue.appendleft(++loc[0])
        loc[1] = i
  
  print(count)


bfs()