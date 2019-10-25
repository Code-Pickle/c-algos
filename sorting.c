#include "sorting.h"

int main()
{
	int arr[100], num_of_elements=0, x, opt; 					// x is data to be entered
    char c[10];
    printf("Enter elements:(0 to stop Entering) \n");
    do
    {
        scanf("%d", &x);
        if(x!=0)
            arr[num_of_elements++]=x;
    }while(x!=0);
	int n = sizeof(arr)/sizeof(arr[0]);
    printf("Choose sorting algorithm:\n");
    printf("1)Selection Sort\n");
    printf("Enter option(0 to exit): ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            selectionSort(arr, num_of_elements);
            break;
        default:
            return 0;
    }
	printf("\n\nSorted array: \n");
	printArray(arr, number_of_elements);
	return 0;
}
