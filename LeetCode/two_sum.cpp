class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>:: iterator it;
        unordered_map<int,int> a;
        unordered_map<int,int>:: iterator ie;
        int i = 0;
        int v;
        vector<int> res;
        for(it=nums.begin();it!=nums.end();it++)
        {
            a.insert(make_pair(*(it),i));
                     i++;
        }
        i=0;
        for(it=nums.begin();it!=nums.end();it++)
        {
            v = *(it);
            ie = a.find(target-v);
            if(ie!=a.end())
            {    
                
                if(ie->second!=i)
                {  
                   res.push_back(i);
                     ie = a.find(target-v); 
                
                     res.push_back(ie->second);
                    return res;
                }
                
            }
            i++;
        
        }
           
    }
};
