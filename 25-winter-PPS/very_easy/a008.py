def solution(test_cases):
    
    results = []
    
    for case in test_cases:
        n, *scores = case
        avg = sum(scores) / n
        above_avg = [score for score in scores if score > avg]
        percentage = (len(above_avg) / n) * 100
        results.append(f"{percentage:.3f}%")
    return results
