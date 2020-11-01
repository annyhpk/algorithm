def solution(s):
    answer = 1000

    if (len(s) // 2) == 0:
        s_len = 2
    else:
        s_len = len(s) // 2

    for x in range(s_len, 0, -1):
        string = ''
        y = 0
        count = 1
        while y < len(s):
            if s[y:y + x] == s[y + x:y + x + x]:
                count += 1
            elif count <= 1:
                string += s[y:y + x]
                count = 1
            else:
                string += str(count) + s[y:y + x]
                count = 1
            y += x
        if len(string) < answer:
            answer = len(string)

    return answer

#       s	                  result
# "aabbaccc"	                7
# "ababcdcdababcdcd"	        9
# "abcabcdede"	                8
# "abcabcabcabcdededededede"	14
# "xababcdcdababcdcd"	        17
