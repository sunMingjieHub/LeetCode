class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=1  , max = 0;
        for(int i = 0 ; i <s.size() ; ++i){
            string s1  = "";
            s1.push_back(s[i]);
            for(int  j = i+1;j<s.size();++j){
                if(s1.find(s[j]) == string::npos ){
                    count++;
                    s1.push_back(s[j]);
                }else break;
            }
            if(max <count){   
                max = count;  
            }
            count = 1;
        }
        return max;
    }
};