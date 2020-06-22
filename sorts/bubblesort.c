#include <stdio.h>

int main() {

    int arr[100]; /* 100 is max array size */
    int numElements;
    int i, j;
    int temp;

    printf("Enter the number of elements you would like to sort\n");
    scanf("%d", &numElements);

    printf("Enter %d integers pressing the return key between each entry.\n", numElements);

    for(i = 0; i < numElements; i++) {

        scanf("%d", &arr[i]);  /* puts entered integers into array */

    }

    for(i = 0; i < numElements - 1; i++) {

        for(j = 0; j < numElements - 1 - i; j++) {

            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }

        }
    }

    printf("Sorted list in increasing order:\n");

    for(i = 0; i < numElements; i++) {

        printf("%d ", arr[i]);

    }

    return 0;

}
