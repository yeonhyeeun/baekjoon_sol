def solution(): 
    # 입력 받기
    N = int(input())  # 멀티탭의 개수 N
    multi_tabs = [int(input()) for _ in range(N)]  # 각 멀티탭의 콘센트 수

    # 첫 번째 멀티탭을 연결하면 1개의 콘센트를 사용하므로,
    # 나머지 멀티탭에서 제공하는 콘센트 수는 해당 수 - 1만큼 유효함.
    total_plugs = sum(multi_tabs) - (N - 1)

    return total_plugs 


# # 결과 출력
# print(total_plugs)
