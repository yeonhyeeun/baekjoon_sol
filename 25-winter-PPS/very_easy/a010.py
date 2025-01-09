def solution(s):
    def compress(text, unit):
        compressed = ""
        prev = text[:unit]
        count = 1

        for i in range(unit, len(text), unit):
            current = text[i:i+unit]
            if current == prev:
                count += 1
            else:
                compressed += (str(count) + prev) if count > 1 else prev
                prev = current
                count = 1

        compressed += (str(count) + prev) if count > 1 else prev
        return len(compressed)

    n = len(s)
    min_length = n

    for unit in range(1, n // 2 + 1):
        min_length = min(min_length, compress(s, unit))

    return min_length