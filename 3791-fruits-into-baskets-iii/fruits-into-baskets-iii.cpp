class Solution {
public:
    vector<int> seg;
    int n;

    void build(vector<int>& baskets, int idx, int l, int r) {
        if (l == r) {
            seg[idx] = baskets[l];
            return;
        }
        int mid = (l + r) / 2;
        build(baskets, idx*2, l, mid);
        build(baskets, idx*2+1, mid+1, r);
        seg[idx] = max(seg[idx*2], seg[idx*2+1]);
    }

    void update(int idx, int l, int r, int pos, int val) {
        if (l == r) {
            seg[idx] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (pos <= mid) update(idx*2, l, mid, pos, val);
        else update(idx*2+1, mid+1, r, pos, val);
        seg[idx] = max(seg[idx*2], seg[idx*2+1]);
    }

    int queryLeftmost(int idx, int l, int r, int fruit) {
        if (seg[idx] < fruit) return -1; // no suitable basket
        if (l == r) return l;
        int mid = (l + r) / 2;
        if (seg[idx*2] >= fruit)
            return queryLeftmost(idx*2, l, mid, fruit);
        return queryLeftmost(idx*2+1, mid+1, r, fruit);
    }

    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        n = baskets.size();
        seg.assign(4*n, 0);
        build(baskets, 1, 0, n-1);

        int unplaced = 0;
        for (int fruit : fruits) {
            int pos = queryLeftmost(1, 0, n-1, fruit);
            if (pos != -1) {
                update(1, 0, n-1, pos, 0); // mark basket used
            } else {
                unplaced++;
            }
        }
        return unplaced;
    }
};
