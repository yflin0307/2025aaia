///week5-3.cpp
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {};
        for(int i=0;i<nums.size();i++){
            int now = nums[i];
            a[now]++;
        }
        for(int i=1;i<=500;i++){
            if( a[i]%2==1) return false;
        }
        return true;
    }
};
