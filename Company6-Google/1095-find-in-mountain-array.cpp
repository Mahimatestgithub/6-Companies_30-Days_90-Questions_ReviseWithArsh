/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
    int leng= mountainArr.length();    // Get the length of the MountainArray
    int left=0,right= leng - 1;         // Initialize pointers for binary search
    // Find the peak of the mountain using binary search
    while (left<right) {
      int mid=(left+right)/2;
      if(mountainArr.get(mid) >=mountainArr.get(mid+1)){ // If the current element is greater  than or equal to the next element,
                // the peak is to the left of mid (inclusive)
          right=mid;       
      }
      else{
          left = mid+1;                // If the current element is less than the next element, the peak is to the right of mid

      }
}
int peak =left;         // 'peak' is the index of the peak of the mountain
int l=0,r=peak;
while(l<=r){            // Binary search on the increasing part of the array
    int mid=(l+r)/2;
    int cur = mountainArr.get(mid);
    if(cur==target)
    {
        return mid;     // Target found in the increasing part of the array
    } else if(cur>target){
        r=mid-1;       // If the current element is greater than the target,
                // search in the left half
    } else{
        l=mid+1;     // If the current element is less than the target,
                // search in the right half
    }
}
l=peak+1,r=leng-1;
while(l<=r){
     int mid=(l+r)/2;
    int cur = mountainArr.get(mid);
    if(cur==target)
    {
        return mid;  // Target found in the decreasing part of the array
    } else if(cur>target){
        l=mid+1;  // If the current element is greater than the target,search in the right half
                
    } else{
      r=mid-1; // If the current element is less than the target, search in the left half
    }
}
     return -1; 
        // If the target is not found in both halves, return -1

}
};
  