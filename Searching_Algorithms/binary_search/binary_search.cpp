// binary search example

#include<iostream>

class Binary_Search {
public:
    int binary_search_iterative(int arr[], int n, int x){
        int low {0};
        int high {n - 1};
        int mid {0};

        while(low <= high){
            mid = low + (high - low) / 2;
            if(arr[mid] == x)
                return mid;
            else if(arr[mid] < x)
                low = mid +1;
            else
                high = mid - 1;
        }

        return -1;
    }

    int binary_search_recursive(int arr[], int low, int high, int x){
        int mid = low + (high - low) / 2;

        if(low > high)
            return -1;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            return binary_search_recursive(arr, mid + 1, high, x);
        else
            return binary_search_recursive(arr, low, high - 1, x);

        return -1;
    }
};
