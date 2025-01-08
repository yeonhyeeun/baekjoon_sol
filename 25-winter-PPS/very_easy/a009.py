def solution(s):
    #문자열 s , python and(&&아님) or(||아님)
    return (len(s) == 4 or len(s) == 6) and s.isdigit()

#오답노트 
#파이썬에서는 and or 를 문자로 작성한다. 
# 숫자 판별에는 문자열이 숫자로만 이루어져있는지에 대해 isdigit()을 사용한다 