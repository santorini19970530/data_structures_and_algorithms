# method 3 - insert hash element, if match next futher element, remove element in hash, finally get the result

# runtimte 115 ms 93.91% of candidates
# 19.9 mb 13% of candidates

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        counts = {}
        
        for n in nums:
            if n not in counts:
                counts[n] = 1
            else:
                del counts[n]

        return list(counts.keys())[0]
