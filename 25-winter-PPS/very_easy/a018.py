def min_sum_product(N, A, B):
    A.sort()  # A를 오름차순으로 정렬
    B.sort(reverse=True)  # B를 내림차순으로 정렬
    result = sum(A[i] * B[i] for i in range(N))  # A[i] * B[i]의 합을 구함
    return result

# 결과 출력
# print(min_sum_product(N, A, B))
