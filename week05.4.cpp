//week05-4.cpp

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans =0;//要翻牌翻幾次
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                ans++;//翻牌加一次
                nums[i+1]=1-nums[i+1];//反過來
                nums[i+2]=1-nums[i+2];//反過來

            }
        }
        int N =nums.size();
        if(nums[N-1]==0 ||nums[N-2]==0)return -1;
        return ans;
    }
};
