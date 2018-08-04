class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<int,int> hash;
        unordered_map<int,int>:: iterator it;
        int len = S.length();
        int i;
        for(i=0;i<len;i++)
        {
            if(hash.find(S[i])==hash.end())
                hash.insert(make_pair(S[i],1));
            else
            {
                it = hash.find(S[i]);
                it->second = it->second + 1;
                
            }
        }
        
        len = J.length();
        int cnt = 0;
        for(i=0;i<len;i++)
        {
            it = hash.find(J[i]);
            if(it!=hash.end())
                cnt = cnt + it->second;
        }
        
        
        return cnt;
    }
};
