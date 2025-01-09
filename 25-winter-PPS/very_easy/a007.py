def solution(sequence):
    
    if sequence == list(range(1, 9)):
        return "ascending"
    
    elif sequence == list(range(8, 0, -1)):
        return "descending"
    
    else:
        return "mixed"