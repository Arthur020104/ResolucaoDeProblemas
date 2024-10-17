struct number
{
    int n;
    int frequency;
};

inline bool operator<(const number& lhs, const number& rhs)
{
    return lhs.n < rhs.n;
}


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, const int k) 
    {
        set<number> unique;
        vector<int> v;
        v.reserve(k);
        vector<number> vec;
        vec.reserve(k);
        for(int i =0;i<nums.size();i++)
        {
            number x;
            x.n = nums[i];
            auto element = unique.find(x);
            if(element != unique.end())
            {
                 number& elementIns = const_cast<number&>(*element);
                 elementIns.frequency++;
            }
            else
            {
                x.frequency = 1;
                unique.insert(x);
            }

        }
        
        for (const auto& elem : unique)
        {
            if(vec.size()<k)
            {
                vec.push_back(elem);
            }
            else
            {
                int m = 0;
                for(int i =1;i<k;i++)
                {
                    if(vec[m].frequency > vec[i].frequency)
                    {
                        m = i;
                    }
                }
                if(vec[m].frequency < elem.frequency)
                {
                    vec[m] = elem;
                }
            }
        }
        for(int i =0;i<k;i++)
        {
            v.push_back(vec[i].n);
        }
        
        return v;
    }
};