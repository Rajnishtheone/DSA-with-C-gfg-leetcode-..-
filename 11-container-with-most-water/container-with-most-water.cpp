class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;int lp=0;int rp=n-1;
        int w=0,area=0;int h=0;
        while(lp<rp){
            w=rp-lp;
            h= min(height[lp],height[rp]);
            area=w*h;
            ans=max(ans,area);

            height[lp]<height[rp] ? lp++ : rp--;
        }

        return ans;
    }
};