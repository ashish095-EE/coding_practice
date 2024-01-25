class Solution {
public:
    void moveZeroes(vector<int>& nums) {

         
        int count = 0; // Count of non-zero elements


	
	    for (int i = 0; i <nums.size(); i++){


            if (nums[i] != 0) {

                nums[count++] = nums[i]; // here count is
                                   // incremented
            }
        }

        
            while (count <nums.size();) {


                nums[count++] = 0;
            }
    }
};