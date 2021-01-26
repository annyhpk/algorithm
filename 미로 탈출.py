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

# board = [
#   [1,0,1,0,1,0],
#   [1,1,1,0,1,1],
#   [0,0,1,1,0,1],
#   [1,1,1,1,1,1],
#   [1,1,1,1,1,1]
# ]

def bfs():
  loc = [0, 0]
  count = -1

  while loc != [4, 5]:
    for i, node in enumerate(board[loc[0]]):
      if loc[1] <= i and node != 0 and loc[0]+1 < x:
        count += 1
        if node == 1 and board[loc[0]+1][i] == 1:  
          loc[1] = i
    loc[0] += 1
    count += 1
    print(loc)

    
  print(count)


bfs()