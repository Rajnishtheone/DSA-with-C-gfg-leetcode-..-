class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        int v = edges.size();
        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        vector<vector<pair<int, int>>> adj(n);
        for (auto& it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, 2 * wt});
        }

        pq.push({0, 0});
        while (!pq.empty()) {
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (node == n - 1)
                return dist[n - 1];
            // if(cost>dist[node]) continue;
            for (auto& p : adj[node]) {
                int adjNode = p.first;
                int edgeweight = p.second;
                if (d + edgeweight < dist[adjNode]) {
                    dist[adjNode] = d + edgeweight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return -1;
    }
};