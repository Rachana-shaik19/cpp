#include<vector>
#include<iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> indices;
        int sum = 0;
        for(auto i = 0; i < nums.size(); i++)
        {
            for(auto j = i + 1 ; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    indices.push_back(i) ;
                    indices.push_back(j);
                    cout << "**************************"<<endl;
                    cout << "value of i = "<< i << endl;
                    cout << "value of j = "<< j << endl;
                    cout << "**************************"<<endl;
                    return indices;
                }
            }
        }
    }
};
int main()
{
    Solution s1;
    vector<int> v1 = {1, 2, 3, 4, 5};
    auto target = 9;
    
    vector<int> index = s1.twoSum(v1, target);
    auto length_index = index.size();
    cout << length_index << endl;
    for(auto i : index )
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}