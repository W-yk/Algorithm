//hash map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        vector<int> res;
        map<int ,int> subMap;
        for(int i = 0;i<N;i++)
        {
            int temp = target -nums[i];
            auto it = subMap.find(temp);
            if(it != subMap.end())
            {
                res.push_back(it->second);
                 res.push_back(i);
            }
            subMap[nums[i]] = i;
        }
        
        return res;
       
    }
};

//find target 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int num1,num2;
        for(i=0;i<nums.size()-1;i++)
        {
            int answer=target-nums[i];
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]==answer)
                {
                    vector<int> tmp={i,j};
                    return tmp;
                }
            }
        }
    }
};