class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sum = INT_MIN;
        for(int i = 0; i<nums.size();i++){
            sum = sum+nums[i];

            if(sum>max_sum){
                max_sum = sum;               //O(n) solution
            }
            if(sum<0){
                sum = 0;
            }
        }
        return max_sum;
        
//O[n^2] solutioin
        
        // int max_sum = INT_MIN;
        // for(int i = 0; i<nums.size();i++){
        //     int temp_sum = 0;
        //     for(int j = i; j<nums.size();j++){
        //         temp_sum = temp_sum+nums[j];
        //         max_sum =max(temp_sum,max_sum);
        //     }
        // }
        // return max_sum;
        
        
    }
};