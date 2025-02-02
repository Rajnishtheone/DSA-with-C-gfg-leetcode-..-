class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
     

        vector<int> temp(n);

        // Directly compute new positions in one loop
        for (int j = 0; j < n; j++) {
            temp[(j + k) % n] = nums[j]; // Shift elements k places at once
        }

        nums = temp; // Copy back the modified array



        }
    
};