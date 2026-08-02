class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> indx = new HashMap<>();

        int i = 0;
        for (int n : nums) {
            int remaining = target - n;
            if (indx.containsKey(remaining)) {
                return new int[]{indx.get(remaining), i};
            }
            indx.put(n, i++);
        }
        return new int[]{};
    }
}
