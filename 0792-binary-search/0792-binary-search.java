class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length; 
        int l=0, r=n-1;
        int mid=0;

        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
        
    }
}