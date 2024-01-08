/* method 2 - XOR the digits in binary form */

/* runtimte 11 ms 86.46% of candidates
   7.7 mb 78.77% of candidates */

int singleNumber(int* nums, int numsSize) {
    int resultBin = 0;

    for(int i = 0; i < numsSize; ++i){
        resultBin ^= nums[i];
    }

    return resultBin;
}
