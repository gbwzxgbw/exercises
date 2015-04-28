public class Solution {
    public int titleToNumber(String s) {
        int col = 0;
        int w = 1;
        int n = s.length();
        for (int i=n-1; i>=0; i--)
        {
            col += (s.charAt(i)-'A'+1) * w;
            w *= 26;
        }
        return col;
    }
}