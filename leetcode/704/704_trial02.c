// leetcode 704
// purely binery search
// runtime 29 ms, beat 30.05% of C online submissions
// memory 6.9 mb, less than 46.07% of C online submissions

#include<stdio.h>

int search(int* nums, int numsSize, int target) {
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
    int array1[] = {-1, 0, 3, 5, 9, 12};
    int n1 = (int)(sizeof(array1) / sizeof(array1[0]));

    int target1 = 9;
    for(int i = 0; i < n1; i++)
        printf("%d\t", array1[i]);
    printf("\n\n");

    printf("Example 1 - \n");
    printf("Target %d is in position %d.\n", target1, search(array1, n1, target1));

    printf("\n");

    int target2 = 2;
    printf("Example 2 - \n");
    printf("Target %d is in position %d.\n", target2, search(array1, n1, target2));

    return 0;
}
