class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>res;vector<int>ans;
        for(int i=0;i<friends.size();i++){
            res.insert(friends[i]);

        }

        for(int i=0;i<order.size();i++){
            if(res.find(order[i])!=res.end()){
                   ans.push_back(order[i]);
            }
        }
        return ans;
    }
};