class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> h;
        unordered_map<char,int>::iterator it;
        int len = s.length();
        int i;
        for(i=0;i<len;i++)
        {
            if(h.find(s[i])==h.end())
                h.insert(make_pair(s[i],1));
            else
            {
                it = h.find(s[i]);
                it->second = it->second + 1;
            }
        }
        
        len = t.length();
        for(i=0;i<len;i++)
        {
            it = h.find(t[i]);
            if(it!=h.end())
            {
                it->second = it->second - 1;
                if(it->second==0)
                    h.erase(t[i]);
            }
            else
                return t[i];
        }
    }
};
