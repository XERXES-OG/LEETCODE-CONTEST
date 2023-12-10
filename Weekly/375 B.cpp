class Solution {
public:
    //ashutosh srivastava
    int solve(int a,int b, int m)
    {
        int ans=1;
            a%=m;
        while(b>0){
            if(b%2==1)
            {
                ans=(ans*a)%m;
                
            }
            a=(a*a)%m;
            b=b/2;
        }
        return ans;
    }
    vector<int> getGoodIndices(vector<vector<int>>& v, int k) {
        vector<int> ans;
        for(int i=0; i<v.size(); i++){
        int a = v[i][0];
        int b = v[i][1];
        int c = v[i][2];
        int m = v[i][3];
        int temp=solve(solve(a,b,10),c,m);
            if(temp==k) ans.push_back(i);
            
        }
        return ans;
    }
};
