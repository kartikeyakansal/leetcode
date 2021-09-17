class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int,int> umap1;
        unordered_map<int,int> umap2;
        for(int i = 0; i < n; i++){
            umap1[nums1[i]]++;
        }
        for(int i = 0; i < m; i++){
            umap2[nums2[i]]++;
        }
        vector<int> ans;
        for(int i = 0; i < 1000; i++){
            int d = min(umap1[i], umap2[i]);
            for(int j = 0; j < d; j++){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
