class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, left = 0, right = height.size() - 1;
        while(right > left){
            int width = right - left;
            int h = min(height[left], height[right]);
            int water = width * h;
            maxArea = max(maxArea, water);
            if(height[right] > height[left]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};