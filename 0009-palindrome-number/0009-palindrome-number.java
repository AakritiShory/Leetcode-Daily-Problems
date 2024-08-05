class Solution {
    public boolean isPalindrome(int x) {
        int temp, r;
        int rev = 0;

        temp = x;
        if (x < 0) {
            return false;  // Negative numbers are not palindromes
        }
        while (x > 0) {
            r = x % 10;
            // Check for overflow before updating rev
            if (rev > (Integer.MAX_VALUE - r) / 10) {
                return false;
            }
            rev = (rev * 10) + r;
            x = x / 10;
        }
        return temp == rev;
    }
}
