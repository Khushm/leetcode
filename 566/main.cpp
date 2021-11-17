// Reshape the Matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int sum = 0;
        vector<int> v;
        vector<vector<int>> vec(r, vector<int> (c, 0));
        for (auto &&i : mat) {
            sum += i.size();
        }
        if(sum == r*c){
            for(vector<int> i : mat){
                for(int j:i)
                    v.push_back(j);
            }
            int k = 0;
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    vec[i][j] = v[k];
                    k++;
                }
            }
            return vec;
        }
        return mat;
    }
};
