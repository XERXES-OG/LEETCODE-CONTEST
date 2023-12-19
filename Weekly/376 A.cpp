class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& v) {
        int n=v[0].size();
        int a,b,sum=0;
        unordered_map<int,int> mp(n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++){
                mp[v[i][j]]++;
                sum+=v[i][j];
            }
        }
        for(auto k:mp){
            if(k.second>1)
            {
                a=k.first;
            }
        }
        int t=n*n;
       // int sum=accumulate(v.begin(),v.end(),0);
        sum=sum-a;
        int asum=t*(t+1)/2;
        b=asum-sum;
        return {a,b};
        
    }
};
