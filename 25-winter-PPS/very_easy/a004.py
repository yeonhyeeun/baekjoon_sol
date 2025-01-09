def solution(arr, divisor):
    # divisor로 나누어 떨어지는 값을 필터링
    divisible = [x for x in arr if x % divisor == 0]
    
    # 나누어 떨어지는 값이 없으면 [-1] 반환
    if not divisible:
        return [-1]
    
    # 오름차순 정렬
    return sorted(divisible)