class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        long long time = 0;
        int n = skill.size(), m = mana.size();
        vector<long long> freeAt(n, 0);

        for (int i = 0; i < m; i++) {
            long long relativeTime = 0, startTime = 0;
            for (int j = 0; j < n; j++) {
                long long temp = skill[j] * mana[i];
                startTime = max(freeAt[j] - relativeTime, startTime);
                relativeTime += temp;
                freeAt[j] = relativeTime;
            }
            for (int j = 0; j < n; j++)
                freeAt[j] += startTime;
            time = startTime + relativeTime;
        }
        return time;
    }
};