class Solution:
    def isValid(self, s: str) -> bool:
        self.str = str
  
        bracket_index = []

        # edited solution, implement hash map instead of if statement of values
        bracket_map = {')': '(', ']': '[', '}': '{'}
        
        for i in s: 
            if i in bracket_map.values():
                bracket_index.append(i)
            elif i in bracket_map.keys():
                if not bracket_index or bracket_map[i] != bracket_index.pop():
                    return False

        return not bracket_index

# test cases
sln = Solution()

# true
print(sln.isValid("()")) 

# true
print(sln.isValid("()[]{}"))

# false
print(sln.isValid("(]"))

# true
print(sln.isValid("([])"))
