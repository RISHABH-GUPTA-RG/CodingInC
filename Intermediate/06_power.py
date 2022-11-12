import math
class Solution:
    def isPower(self,n:int,x:int) ->bool:
        # if n <=0:
        #     return False
        p=math.log10(n)/math.log10(x)
        if (p-int(p))==0:
            return True
        else:
            return False
    
x=int(input(("Enter the number ")))
y=int(input(("Enter the power to check")))
print(Solution().isPower(x,y))