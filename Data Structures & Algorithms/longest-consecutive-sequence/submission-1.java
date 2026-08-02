class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;
        int curr_length = 1;
        int max_length = 1;
        HashSet<Integer> exist = new HashSet<>();
        for (int n : nums) {
            exist.add(n);
        }

        for (int num : exist) {
            if (!exist.contains(num - 1)) {
                int curr_num = num;
                curr_length = 1;

                while (exist.contains(curr_num + 1)) {
                    curr_num++;
                    curr_length++;
                }
                max_length = Math.max(curr_length, max_length);
            }
        }
        return max_length;
    }
}
