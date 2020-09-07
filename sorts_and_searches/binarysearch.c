/* C implementation of the binary search algorithm */

#include <stdio.h>

int binary_search(int nums[], int n) 
{

    /* iterative approach to binary search that return s the index of the integer n in the array nums and -1 if it is not found. */

    int lower_bound, upper_bound, mid_index, mid_val;

    while (lower_bound <= upper_bound) 
    {

        mid_index = lower_bound + (int) (upper_bound - lower_bound);

        mid_val = nums[mid_index];

        if (mid_val == n) 
        {

            return mid_index;
        }

        else if (mid_val < n) 
        {

            lower_bound = mid_index + 1;

        }

        else 
        {

            upper_bound = mid_index + 1;

        }                

    }
    
    return -1;

}

int main()
{

    int nums[] = {2, 5, 7, 12, 3, 4, 11, 15, 1};

    int index = (int) binary_search(nums, 3);

    printf("%d\n", index);

    return 0;

}
