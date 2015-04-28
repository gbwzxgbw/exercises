public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int count = 0;
        int num = n;
        for (int i = 0; i < 32; i++)
        {
             int b = num & 1;
             if (b == 1)
             {
                 count ++;
             }
             num >>= 1;
        }
        return count;
    }
}