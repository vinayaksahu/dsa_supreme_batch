class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(),win=n-1;
        if(n==1) return true;
        for(int i=n-2; i>=0; i--){
            if(win-i<=nums[i]) win=i;
        }
        return win==0;
    }
};