class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int check=1;
                int last_element =-1;
                for(int k=0;k<n;k++){
                    if(k>=i && k<=j){
                        continue;
                    }
                    if(last_element>=nums[k]){
                        check=0;
                        break;
                    }
                    last_element=nums[k];
                }
                if(check){
                    count++;
                }
        }
    }
    return count;
    }
};