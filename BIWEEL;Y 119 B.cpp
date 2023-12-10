class Solution {
public:
    int removeAlmostEqualCharacters(string str) {
        int ans=0;
        for(int i=1; i<str.length();)
        {
            if(str[i]==str[i-1] or abs(str[i]-str[i-1])==1)
            {
                i+=2;
                ans++;
            }
            else
                i++;
        }
        return ans;
    }
};
