class Solution {
public:
    //ashutosh srivastava
    long long countSubarrays(vector<int>& v, int k) {
        int low=0;
        long long n=v.size();
        long long ans=0,t=0;
        int maxx=*max_element(v.begin(),v.end());
        for(int j=0; j<v.size(); j++)
        {
            if(v[j]==maxx)
            {
                t++;
            }
            if(t>=k)
            {
                while(t>=k){
                ans+=n-j;
                if(v[low]==maxx)
                    t--;
                    low++;
                  //  cout<<ans<<" ";
            }
            }
        }
        return ans;

    }
};
