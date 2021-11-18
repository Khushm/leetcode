// First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length() == 1)
            return 0;
        for(int i=0;i<s.length(); i++){
            int count = 0;
            for(int j = 0 ; j<s.length() ; j++){
                if(i != j){
                    if(s[i] != s[j])
                        count++;
                    if(count == s.length()-1)
                        return i;   
                }
            }
        }
        return -1;
    }
};
