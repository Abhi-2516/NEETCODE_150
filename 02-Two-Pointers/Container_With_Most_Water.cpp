class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxArea = 0;

        while (l < r) {
            int h = min(height[l], height[r]);
            int w = r - l;
            maxArea = max(maxArea, h * w);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }

        return maxArea;
    }
};
