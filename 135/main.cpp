// Candy
class Solution {
public:
    int candy(vector<int>& arr) {
        vector<int> value(arr.size(), 1);
        int sum = 0;
        // for(auto& i: arr)
        //     value.push_back(1);
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] > arr[i-1])
                value[i] = value[i-1] + 1;
        }
        // reverse(arr.begin(), arr.end());
        // reverse(value.begin(), value.end());
        for(int i = arr.size()-2; i>=0; i--){
            if(arr[i] > arr[i+1])
                if(value[i] <= value[i+1])
                    value[i] = value[i+1] + 1;
        }
        for(auto& i: value){
            cout << i;
            sum+=i;
        }
        return sum;
    }
};
