/* C implementation of the mergesort algorithm */

#include <stdio.h>

int merge(int arr[], int start, int mid, int end)
{

    /* creating an array to hold the merged array */
    int res_array[end - start];

    int a = start;
    int b = mid + 1;
    int i = 0;

    while(a <= mid && b <= end) {

        if(arr[a] > arr[b]) 
        {

            res_array[i++] = arr[a++]; /* ++ so variables auto increment after usage */

        } else if (arr[a] >= arr[b]) {

            res_array[i++] = arr[b++];

        }
    }
    
    if(a <= mid)
    {
        while(a <= mid) 
        {
            res_array[i++] = arr[a++];
        }
    } else if (b <= end) {
        
        while(b <= end) 
        {
            res_array[i++] = arr[b++];
        }
    }

    for(int j = start; j <= end; j++)
    {
        arr[j] = res_array[j - start];
    }
    printf("Made it inside merge function");
    return 0;

}

void merge_sort(int arr[], int start, int end)
{

    printf("\nweewoo\n");

    if(start == end)
    {
        return;
    }

    int mid = (start + end) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge(arr, start, mid, end);

}


void print_array(int array_length, int array[]) 
{
    
    printf("\nbeepboop\n");

    for(int i = 0; i < array_length; i++) 
    {
        printf("[%d] ", array[i]);
    }
    printf("\nbeepbeep\n");
}

int main() 
{

    int input_array[] = {5,13,2,20,25,1,7};
    int input_array_length = sizeof(input_array) / sizeof(int);

    printf("The input array is \n\n");
    print_array(input_array_length, input_array);
   
    printf("\nbopbop\n");

    merge_sort(input_array, 0, input_array_length - 1);


    printf("\nbapbap\n");

    printf("\n\nThe array after processing is \n\n");    
    print_array(input_array_length, input_array);

    return 0;

}




