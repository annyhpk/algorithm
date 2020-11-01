def solution(skill, skill_trees):
    answer = 0

    for s in skill_trees:
        skills = ''
        for c in s:
            if c in skill:
                skills += c

        if skills in skill and skills in skill[:len(skills)]:
            answer += 1

    return answer

# skill,	skill_trees,	                    return
# "CBD",	["BACDE", "CBADF", "AECB", "BDA"]  =>  2
