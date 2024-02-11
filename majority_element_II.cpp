

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int element1=INT_MIN,element2=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(cnt1==0&&element2!=nums[i]){
                cnt1=1;
                element1=nums[i];

            }
            else if(cnt2==0&&element1!=nums[i]){
                cnt2=1;
                element2=nums[i];

            }
            else if(nums[i]==element1)cnt1++;
            else if(nums[i]==element2)cnt2++;

            else{
                cnt1--;
                cnt2--;
            }

            
        }

        vector<int> result;
        int threshold = nums.size() / 3; // Threshold for majority element

        // Second pass to count occurrences of the potential majority elements.
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (element1 == nums[i]) {
                cnt1++;
            } else if (element2 == nums[i]) {
                cnt2++;
            }
        }

        // Check if the counts of potential majority elements are greater than n/3 and add them to the result.
        if (cnt1 > threshold) {
            result.push_back(element1);
        }
        if (cnt2 > threshold) {
            result.push_back(element2);
        }

        return result;

        
    }
};