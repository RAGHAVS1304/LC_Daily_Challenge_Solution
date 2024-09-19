class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        int n=expression.size();
        for(int i=0;i<n;i++){
            if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*'){
                vector<int> left_val=diffWaysToCompute(expression.substr(0, i));
                vector<int> right_val=diffWaysToCompute(expression.substr(i+1));
                char c=expression[i];
                for(int j=0;j<left_val.size();j++){
                    for(int k=0;k<right_val.size();k++){
                        if(c=='+'){ans.push_back(left_val[j]+right_val[k]);}
                        else if(c=='-'){ans.push_back(left_val[j]-right_val[k]);}
                        if(c=='*'){ans.push_back(left_val[j]*right_val[k]);}

                    }
                }

            
            }
        }
        if(ans.size()==0){ans.push_back(stoi(expression));}

        return ans;
    }
};