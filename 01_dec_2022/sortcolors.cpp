class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,m=0,h=n-1;
        while(m<=h)
        {
            if(nums[m]==0)
            {
                int t=nums[l];
                nums[l]=nums[m];
                nums[m]=t;
                l++; m++;
            }
            else if(nums[m]==1)
                m++;
            else if(nums[m]==2)
            {
                int t=nums[m];
                nums[m]=nums[h];
                nums[h]=t;
                h--;
            }
        }
    }
};