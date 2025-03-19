//week05-3.cpp
//leetcode 2206
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={};//開501大小的陣列
        int odd=0;
        for(int i=0;i<nums.size();i++){
            int now =nums[i];
            a[now]++;//noW增加一次
            if (a[now]%2==0) odd--;
            else odd++;//多一個奇數
        }
        if(odd==0) return true;
        else return false;

    }
};
