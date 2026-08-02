class Solution {
    public boolean isPalindrome(String s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            char st = s.charAt(left);
            char en = s.charAt(right);

            if (!Character.isLetterOrDigit(st)) {
                left++;
                continue;
            }

            if (!Character.isLetterOrDigit(en)) {
                right--;
                continue;
            }
            if (Character.toLowerCase(st) != Character.toLowerCase(en)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
}
