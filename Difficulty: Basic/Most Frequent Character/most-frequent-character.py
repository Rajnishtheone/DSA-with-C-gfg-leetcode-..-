#User function Template for python3

class Solution:
    
    #Function to find the maximum occurring character in a string.
    def getMaxOccurringChar(self, s):
        chardict = {}
        for i in s:
            if i not in chardict.keys():
                chardict[i] = 0
            else:
                chardict[i] += 1
        
        maxfreq = max(chardict.values())
        
        for i in sorted(chardict.keys()):
            if chardict[i] == maxfreq:
                return i


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        print(Solution().getMaxOccurringChar(s))
        print("~")

# } Driver Code Ends