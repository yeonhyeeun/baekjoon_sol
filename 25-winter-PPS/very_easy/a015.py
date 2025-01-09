def solution(test_cases):
    results = []
    for case in test_cases:
        n, *scores = case
        avg = sum(scores) / n
        above_avg = [score for score in scores if score > avg]
        percentage = (len(above_avg) / n) * 100
        results.append(f"{percentage:.3f}%")
    return results

def verification_number(numbers):
    # 각 숫자를 제곱한 합을 10으로 나눈 나머지 계산
    return sum(x**2 for x in numbers) % 10