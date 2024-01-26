class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int duplicate_number;

        for(int i = 0; i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                duplicate_number=nums[i];
                break;
                
            }
            
        }
        return duplicate_number;
        
    }
};