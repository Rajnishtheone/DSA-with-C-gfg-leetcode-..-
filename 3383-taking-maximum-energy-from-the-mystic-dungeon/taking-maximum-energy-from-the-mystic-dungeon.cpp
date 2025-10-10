class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();

        for(int i=0;i<n;i++){
            if(i-k >= 0)
            energy[i]=max(energy[i],energy[i]+energy[i-k]);
        }

        int ans=-1e9;
        for(int i=n-1;i>=n-k;i--){
            ans=max(ans,energy[i]);
        }
        return ans;
    }
};