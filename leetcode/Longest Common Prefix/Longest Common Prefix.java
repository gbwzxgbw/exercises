public class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length <= 0)
            return "";

        if (strs.length == 1)
            return strs[0];

        String sample = strs[0];
        int idx = 0;
        String prefix = "";
        Boolean endflag = false;

        while (idx < sample.length())
        {
            for (int i=1; i<strs.length; i++)
            {
                if (strs[i].length() <= idx || strs[i].charAt(idx) != sample.charAt(idx))
                {
                    endflag = true;
                    break;
                }
            }
            if (endflag)
                break;
            prefix += sample.charAt(idx);
            idx ++;
        }

        return prefix;
    }
}