class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }

        int[] counts = new int[26];

        for(int i=0; i<s.length(); i++){
            counts[s.charAt(i)-'a']++;
            counts[t.charAt(i)-'a']--;
        }

        for(int c:counts){
            if(c!=0) {return false;}
        }


        return true; 

        /*
        HashMap<Character, Integer> count = new HashMap<>();
        for(int i=0; i<s.length(); i++){
            char c=s.charAt(i);
            count.put(c, count.getOrDefault(c, 0) + 1);
        }

        for(int i=0; i<t.length(); i++){
            char c=t.charAt(i);
            if (!count.containsKey(c)) {
                return false;
            }
            count.put(c, count.getOrDefault(c, 0) - 1);

            if (count.get(c) < 0) {
                    return false;
            }*/ 
    }
}