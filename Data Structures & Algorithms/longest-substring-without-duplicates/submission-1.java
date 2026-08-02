class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();
        char[] a = s.toCharArray();

        int left = 0;
        int max = 0;

        for (int right = 0; right < a.length; right++) {
            char c = a[right];

            while (set.contains(c)) {
                set.remove(a[left]);
                left++;
            }
            set.add(c);
            max = Math.max(max, right - left + 1);
        }

        return max;
    }
}
