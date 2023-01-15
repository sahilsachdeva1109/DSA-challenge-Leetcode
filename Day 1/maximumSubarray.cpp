class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Based On kadane's algorithm 
        // two var taken one for storing the sum and other is for storing the max sum
        int sum =0 ;
        int max_sum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            max_sum = max(sum,max_sum);
            if (sum >= max_sum){
                max_sum = sum;
            }
            if( sum < 0 ){
                sum =0;
            }
        }
        
    return max_sum;
}
};
