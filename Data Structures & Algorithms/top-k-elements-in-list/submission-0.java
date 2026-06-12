class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int max = 0;
        
        for(int i = 0; i < nums.length; i++){
            int val = nums[i];
            map.put(val, map.getOrDefault(val, 0) + 1);
            if(max < map.get(val)){
                max = map.get(val);
            }
        }
        
        int res[] = new int[k];
        List<Integer>[] buckets = new List[nums.length + 1]; 
        
        for(int key : map.keySet()){
            int freq = map.get(key);
            if(buckets[freq] == null) {
                buckets[freq] = new ArrayList<>();
            }
            buckets[freq].add(key);
        }

        int index = 0;
        for (int i = buckets.length - 1; i >= 0; i--) {
            if (buckets[i] != null) {
                for (int val : buckets[i]) {
                    res[index] = val;
                    index++;
                    
                    if (index == k) {
                        return res;
                    }
                }
            }
        }

        return res;
    }
}