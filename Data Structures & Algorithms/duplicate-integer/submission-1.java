class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for (int i = 0 ; i < nums.length ; i++) {
            int count = freq.getOrDefault(nums[i] , 0);
            freq.put(nums[i], count + 1);
            if (freq.get(nums[i]) > 1) {
                return true;
            }
        }
        return false;
    }
}