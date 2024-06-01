// linear search example

#include<iostream>

class Linear_Search {
public:
    // for searching an array arr
    // with array size n
    // and looking for the position of x
    // if cannot find return -1
    int linear_search(int arr[], int n, int x){
        for(int i = 0; i < n; i++)
            if(arr[i] == x)
                return i;

        return -1;
    }

    /* to minimise the searching time,
    if we know the array has already been sorted,
    add one more exit condition */
    int sorted_linear_search(int arr[], int n, int x){
        for(int i = 0; i < n; i++)
            if(arr[i] == x)
                return i;
            else if(arr[i] > x)
                return -1;

        return -1;
    }
};
