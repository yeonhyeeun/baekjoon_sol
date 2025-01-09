# 입력 받기
A = int(input())  # A를 입력받음
B = int(input())  # B를 입력받음
C = int(input())  # C를 입력받음

# A * B * C 계산
result = A * B * C

# 결과를 문자열로 변환
result_str = str(result)

# 0부터 9까지의 숫자 빈도수를 세는 리스트
digit_count = [0] * 10

# 각 숫자에 대해 빈도수 세기
for digit in result_str:
    digit_count[int(digit)] += 1

# 0부터 9까지의 빈도수를 출력
for count in digit_count:
    print(count)
