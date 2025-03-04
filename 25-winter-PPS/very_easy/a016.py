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

def rescue_boats(people, limit):
    # 몸무게를 정렬
    people.sort()
    left, right = 0, len(people) - 1
    boats = 0

    while left <= right:
        # 가장 가벼운 사람 + 가장 무거운 사람 체크
        if people[left] + people[right] <= limit:
            left += 1
        right -= 1
        boats += 1

    return boats