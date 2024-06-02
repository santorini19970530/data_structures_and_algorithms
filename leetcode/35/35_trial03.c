// leetcode 35
// modificatioin of binery search
// runtime 5 ms, faster than 54.58% of C online submissions
// memory 5.7 mb, less than 62.77% of C online submissions

#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;   // left bond
    int right = numsSize;   // the target still can be inserted into the last position if its value is larger than all array elements
    int mid = 0;

    while(left < right){
        // left no need to be equal to right
        // since when left equals to right, that is already the insert position
        // just exit the while loop and return left is ok
        mid = left + (right - left) / 2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            right = mid;    // just chop off the right bigger items
        // no need to chop off mid position since the target still have chance to insert
        else
            left = mid + 1;     // chop off the smaller items
        // need to chop off also mid, since target can no longer insert to the original left position
    }

    // return the left value, to make the array in order
    return left;
}

// below is the binary search code for reference
int binary_search(int* nums, int numsSize, int target) {
    int left = 0;   // left bond
    int right = numsSize - 1;    // right bond
    int mid = 0;
    
    while(left <= right){
        mid = left + (right - left) / 2;    // set up the pivot index
        
        if(nums[mid] == target)
            return mid;     // match the target, just return
        else if(nums[mid] < target)
            left = mid + 1;     // chop off the smaller elements and mid itself
        else
            right = mid - 1;      // chop off the greater elements and mid itself
    }

    return -1;  // if no result, return -1
}

// test cases
int main(){
    int array1[] = {1, 3, 5, 6};
    int n1 = (int)(sizeof(array1) / sizeof(array1[0]));

    int target1 = 5;
    for(int i = 0; i < n1; i++)
        printf("%d\t", array1[i]);
    printf("\n\n");

    printf("Example 1 - \n");
    printf("Target %d is / shall be in position %d.\n", target1, searchInsert(array1, n1, target1));

    printf("\n");

    int target2 = 2;
    printf("Example 2 - \n");
    printf("Target %d is / shall be in position %d.\n", target2, searchInsert(array1, n1, target2));

    printf("\n");

    int target3 = 7;
    printf("Example 3 - \n");
    printf("Target %d is / shall be in position %d.\n", target3, searchInsert(array1, n1, target3));

    return 0;
}
