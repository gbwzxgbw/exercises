class Solution:
    # @param {integer} n
    # @return {boolean}
    def isHappy(self, n):
        nums = []
        while True:
            if n == 1:
                break
            if n in nums:
                break
            nums.append(n)
            t = 0
            while n > 0:
                t += (n%10)**2
                n /= 10
            n = t
            
        return n == 1