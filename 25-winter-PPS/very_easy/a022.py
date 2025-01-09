import math

# 입력 받기
N = int(input())  # 통화 횟수 N
call_times = list(map(int, input().split()))  # 각 통화 시간

# 영식
y_cost = 0
for time in call_times:
    y_cost += math.ceil(time / 30) * 10

# 민식
m_cost = 0
for time in call_times:
    m_cost += math.ceil(time / 60) * 15

# 결과 비교
if y_cost < m_cost:
    print(f"Y {y_cost}")
elif y_cost > m_cost:
    print(f"M {m_cost}")
else:
    print(f"Y {y_cost}")
