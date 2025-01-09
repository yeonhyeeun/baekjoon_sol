def solution(skill, skill_trees):
    
    def is_valid_skill_tree(skill, tree):
        skill_order = list(skill)
        for s in tree:
            if s in skill_order:
                if s != skill_order.pop(0):
                    return False
        return True

    valid_count = sum(is_valid_skill_tree(skill, tree) for tree in skill_trees)
    
    return valid_count