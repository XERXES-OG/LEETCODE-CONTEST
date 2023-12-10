class Solution {
public:
    //ashutosh srivastava
    int countTestedDevices(vector<int>& v) {
        int n=v.size();
        int ans=0,d=0;
        for(int i=0; i<n;i++)
        {
            if(v[i]>d){
                ans++;
                d++;
            }
        }
        return ans;
        
    }
};
