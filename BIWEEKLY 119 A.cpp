class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp,mp1;
        for(int i:nums1)
        {
            mp[i]++;
        }
        for(int i:nums2)
        {
            mp1[i]++;
        }
        int a=0,b=0;
        for(int i=0; i<nums1.size(); i++)
        {
            if(mp1.find(nums1[i])!=mp1.end()){
                a++;
            }
        }
        for(int i=0; i<nums2.size(); i++)
        {
            if(mp.find(nums2[i])!=mp.end()){
                b++;
            }
     }
        return {a,b};
    }
        
};
