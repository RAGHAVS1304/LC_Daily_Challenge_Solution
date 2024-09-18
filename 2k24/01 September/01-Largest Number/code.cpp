class Solution {
public:
    static bool cmp(int & a, int & b){
        string sa=to_string(a);
        string sb=to_string(b);
        return sa+sb>sb+sa;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        string res="";
        if(nums[0]==0){return "0";}
        for(auto it: nums){
            res+=to_string(it);
        }
        return res;

    }
};