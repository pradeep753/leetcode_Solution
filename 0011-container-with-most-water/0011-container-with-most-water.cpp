class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, left = 0, right = height.size() - 1;
        while(right > left){
            maxArea = max(maxArea, (right- left) * min(height[left], height[right]));
            if(height[right] > height[left]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};