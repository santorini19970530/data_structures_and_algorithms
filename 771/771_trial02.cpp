// leetcode 771
// bruteforce loop
// runtime 0 ms, beat 100% of C++ challengers
// memory 6.44 mb, beat 79.33% of C++ challengers
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter = 0;

        for(int  i = 0; i < jewels.length(); ++i){
            char jewel = jewels[i];
            for(int j = 0; j < stones.length(); ++j)
                if(jewels[i] == stones[j])
                    ++counter;
        }

    return counter;}
};
