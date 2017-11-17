//map 查询键值对 O(nlogn)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> m;
        int i,len=nums.size();
        for(i=0; i<len; ++i) {
            if(m.count(nums[i])==0) {
                m.insert(pair<int,int>(nums[i],i));
            }
            if(m.count(target-nums[i])!=0) {
                int n=m[target-nums[i]];
                if(n<i) {
                    res.push_back(n);
                    res.push_back(i);
                    return res;
                }
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    vector<int> nums,res;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    res=s.twoSum(nums,6);
    int len=res.size();
    for(int i=0; i<len; ++i) cout<<res[i]<<endl;
    return 0;
}
