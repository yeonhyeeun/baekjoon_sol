
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
def solution(s): 
    s = s.lower() #대소문자 일치 
    #문자열 s 쪼개기 - char씩 : list 사용 
    #p,y 개수 세기 : .count 
    pnum = s.count('p') 
    # print("p개수: ", pnum)
    ynum = s.count('y') 
    # print("y개수: ", ynum)

    return pnum == ynum

#오답노트 
# 따로 선언해줄 필요없음 정의만 하기 
# 채점시 input으로 받지말고 매개변수를 사용해서 함수에서 바로 사용한다 
# return True/False를 직접 작성하지 않고 계산 결과가 true인지 false인지를 파악해서 
# return은 한번만 작성한다 
