from typing import List
class Solution:
    @staticmethod
    def cmp(a: str, b: str)->bool::
    s1=a
    s2=b
    return (s1+s2)>(s1+s2)
def largestNumber(self, nums: List[int])-> str:
    str_num=list(map(str, nums))
    str_num.sort(key=lambda x: x*10, reverse=True)
    if(str_num[0]=="0"):
        return "0"
    return ''.join(str_num)