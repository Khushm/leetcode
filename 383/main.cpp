// Ransom Note
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count = 0;
        for(int i=0; i<ransomNote.length(); i++){
            auto it = find(magazine.begin(), magazine.end(), ransomNote[i]);
            if(it != magazine.end()){
                count++;
                magazine.erase(it);
            }
        }
        if(ransomNote.length() == count)
            return true;
        return false;
    }
};
