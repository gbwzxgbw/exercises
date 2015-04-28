public class Solution {
    public String convertToTitle(int n) {
        StringBuilder sb = new StringBuilder();
        while (n>0)
        {
            int r = (n-1) % 26;
            sb.insert(0, (char)('A'+r));
            n = (n-1) / 26;
        }
        return sb.toString();
    }
}