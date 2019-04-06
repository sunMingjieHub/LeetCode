/*
 给定两个大小为 m 和 n 的有序数组 nums1 和 nums2。
 
 请你找出这两个有序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。
 
 你可以假设 nums1 和 nums2 不会同时为空。
 
 示例 1:
 
 nums1 = [1, 3]
 nums2 = [2]
 
 则中位数是 2.0
 示例 2:
 
 nums1 = [1, 2]
 nums2 = [3, 4]
 
 则中位数是 (2 + 3)/2 = 2.5
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0&&nums2.size()==0){
            return 0.0;
        }
        int l1 = nums1.size(),l2 = nums2.size();
        vector<int> nums;
        int i=0,j=0;
        while(i<l1&&j<l2){
            nums.push_back(nums1[i]<=nums2[j]?nums1[i++]:nums2[j++]);
        }
        while(i<l1){
            nums.push_back(nums1[i++]);
        }
        while(j<l2){
            nums.push_back(nums2[j++]);
        }
        int len = nums.size();
        
        if(len%2==0){
            return (nums[len/2-1]+nums[len/2])/2.0;
        }else return (double)nums[len/2];
    }
};
