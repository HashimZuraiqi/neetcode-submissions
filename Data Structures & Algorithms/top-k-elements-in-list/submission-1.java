class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for (int n : nums) {
            int count = freq.getOrDefault(n, 0);
            freq.put(n, count + 1);
        }
        PriorityQueue<Map.Entry<Integer, Integer>> pq = new PriorityQueue<>((a, b) -> b.getValue() - a.getValue());
        pq.addAll(freq.entrySet());

        int[] sol = new int[k];
        for (int i = 0 ; i < k ; i++) {
            sol[i] = pq.poll().getKey();
        }
        return sol;
    }
}
