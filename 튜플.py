def solution(s):
    new_s = s[2:-2].split('},{')
    numbers = []
    for z in new_s:
        for y in z.split(','):
            numbers.append(int(y))

    data = set(numbers)
    counter = {}
    for sd in data:
        counter[sd] = numbers.count(sd)

    answer = []
    for k, v in sorted(counter.items(), key=lambda x: x[1], reverse=True):
        answer.append(k)

    return answer

if __name__ == '__main__':
    s = "{{2},{2,1},{2,1,3},{2,1,3,4}}"

    answer = solution(s)
    print(answer)