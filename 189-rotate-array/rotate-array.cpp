class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
     

        vector<int> temp(n);

        // Directly compute new positions in one loop
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i]; // Shift elements k places at once
        }

        nums = temp; // Copy back the modified array



        }
    
};