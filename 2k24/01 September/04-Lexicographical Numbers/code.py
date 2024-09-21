class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        strl=[]
        for i in range(1, n+1):
            strl.append(str(i))
        strl.sort()
        intl=[]
        for i in strl:
            intl.append(int(i))
        return intl          