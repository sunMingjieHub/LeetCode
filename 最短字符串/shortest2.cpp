class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      map <char, int> content;
        int tag = 0;
        int count = 0;
        for(int i = 0; i < s.size() ; i++){
            map <char, int>::iterator it = content.find(s[i]);//查找是否存在s[i]
            if(it == content.end()){
                content.insert(pair<char, int>(s[i], i));
                count++;
                
            } else {
                if (count < i - it->second)
                    count++;
                else 
                    count =  i - it->second;
                it->second = i;
                
            }
            
            if(tag < count) tag = count ;
            
        }
        return tag;
    }
};