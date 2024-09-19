class Solution:
    def diffWaysToCompute(self, expression: str) -> List[int]:
        ans=[]
        n=len(expression)
        for i in range(0, n):
            if(expression[i]=='+' or expression[i]=='-' or expression[i]=='*'):
                left_val=self.diffWaysToCompute(expression[:i])
                right_val=self.diffWaysToCompute(expression[i+1:])
                c=expression[i]
                for j in range(0, len(left_val)):
                    for k in range(0, len(right_val)):
                        if(c=='+'):
                            ans.append(left_val[j]+right_val[k])
                        elif(c=='-'):
                            ans.append(left_val[j]-right_val[k])
                        else:
                            ans.append(left_val[j]*right_val[k])
        if(len(ans)==0):
            ans.append(int(expression))
        return ans                                
        