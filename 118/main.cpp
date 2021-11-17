// Pascal's Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        vector<int> temp;
        vector<int> curr;
        int add;
        
        for(int i=1; i< numRows+1; i++){
            if(i == 1){
                temp.push_back(1);
                v.push_back(temp);
                swap(curr, temp);
            }
            else if( i == 2){
                temp.push_back(1);
                temp.push_back(1);
                v.push_back(temp);
                swap(curr, temp);
            }      
            else{
                temp.push_back(1);
                for(int j = 0; j<= i-3; j++){
                    add = curr[j] + curr[j+1];
                    temp.push_back(add);
                }
                temp.push_back(1);
                v.push_back(temp);
                swap(curr, temp);
            }
            temp.clear();
        }
        return v;
    }
};
