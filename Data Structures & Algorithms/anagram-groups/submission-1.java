class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> sol = new HashMap<>();
        for (String s : strs) {
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String key = new String(chars);
            sol.computeIfAbsent(key, k -> new ArrayList<>()).add(s);
        }
        return new ArrayList<>(sol.values());
    }
}
