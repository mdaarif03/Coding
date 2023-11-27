#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])continue;
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }
int main()
{
    vector<int> a;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        a.push_back(i);
    }
    // cout<<findDuplicates(a,n);
    
    
    return 0;
}