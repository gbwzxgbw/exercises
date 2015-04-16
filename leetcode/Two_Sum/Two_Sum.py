class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        num_index = []
        for i, n in enumerate(num):
            num_index.append((i, n))
        num_sorted = sorted(num_index, key=lambda x: x[1])
        index1 = 0
        index2 = len(num)-1
        while True:
            sum_so_far = num_sorted[index1][1] + num_sorted[index2][1]
            if sum_so_far < target:
                index1 += 1
            elif sum_so_far > target:
                index2 -= 1
            else:
                index_ret_1, index_ret_2 = num_sorted[index1][0], num_sorted[index2][0]
                if index_ret_1 > index_ret_2:
                    index_ret_1, index_ret_2 = index_ret_2, index_ret_1
                return index_ret_1+1, index_ret_2+1

if __name__ == '__main__':
    test_case = [
        ([-1, -2, -3, -4, -5], -8),
        ([2, 7, 11, 15], 9),
    ]
    s = Solution()
    for num, target in test_case:
        print num, target
        index_1, index_2 = s.twoSum(num, target)
        print index_1, index_2
        assert num[index_1-1] + num[index_2-1] == target