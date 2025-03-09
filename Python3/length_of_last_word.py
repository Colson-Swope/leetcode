# solution
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        self.str = str
        
        # split string 
        split_words = s.split()
        
        # get last word length
        last_word_len = len(split_words[-1])

        return last_word_len


# /// test cases /// 
sln = Solution()

# case 1 
print(sln.lengthOfLastWord("Hello world"))

# case 2 
print(sln.lengthOfLastWord("   fly me   to   the moon  "))

# case 3 
print(sln.lengthOfLastWord("test test test"))
