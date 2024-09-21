class Solution {
    public boolean isAnagram(String s, String t) {
        char[] str1=s.toCharArray();
        char[] str2=t.toCharArray();

        Arrays.sort(str1);
        Arrays.sort(str2);
        // if(str1.equals(str2)){
        //     return true;
        // }else{
        //     return false;
        // }
        return Arrays.equals(str1,str2);
        
    }
}