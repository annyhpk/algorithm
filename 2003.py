n, m = map(int, input().split())

data = list(map(int, input().split()))

summary = 0
result = 0
end = 0

for start in range(n):

    while summary < m and end < n:
        summary += data[end]
        end += 1

    if summary == m:
        result += 1
    summary -= data[start]

print(result)