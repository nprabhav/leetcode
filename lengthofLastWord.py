class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s=s.strip()
        return len(s.strip().split()[-1]) if len(s) > 0 else 0
        
