class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        HashMap<Character, Integer> freq = new HashMap<>();
        for (int i = 0 ; i < s.length() ; i++) {
            char c =  s.charAt(i);
            int count = freq.getOrDefault(c, 0);
            freq.put(c, count + 1);
        }
        for (int i = 0 ; i < t.length() ; i++) {
            char c = t.charAt(i);
            if (!freq.containsKey(c)) {
                return false;
            }
            int count = freq.get(c) - 1;
            if (count < 0) {
                return false;
            }
            freq.put(c, count);
        }
        return true;
    }
}
