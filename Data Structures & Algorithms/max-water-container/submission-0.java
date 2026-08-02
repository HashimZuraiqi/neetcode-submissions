class Solution {
    public int maxArea(int[] heights) {
        int curr_water = 0;
        int max_water = 0;
        int l = 0;
        int r = heights.length - 1;
        while (l < r) {
            curr_water = Math.min(heights[l], heights[r]) * (r - l);
            max_water = Math.max(max_water, curr_water);

            if (heights[l] < heights[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return max_water;
    }
}
