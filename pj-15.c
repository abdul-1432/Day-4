// find the 2nd smallest and 2nd biggest value of an array
#include <stdio.h>
void main()
{
	int arr[10], c, tot=0, big, small, secondLargest, secondSmallest;
	printf("Enter 10 values for the array :");
	for(c=0;c<10;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("\n Given values are:");
	tot=small=big=secondLargest=secondSmallest=arr[0];
	 for (c = 1; c < 10; c++)
	 {
        if (arr[c] > big)
			big = arr[c];
        else if(arr[c] > secondLargest && arr[c] != big)
            secondLargest = arr[c];

        if (arr[c] < small)
            small = arr[c];
        else if(arr[c] < secondSmallest && arr[c] != small)
            secondSmallest = arr[c];
    }
	printf("\n total is : %d",tot);
	printf("\n biggest value is : %d",big);
	printf("\n smallest value is : %d",small);
	printf("\n second largest value : is %d",secondLargest);
	printf("\n second smallest value is : %d",secondSmallest);
}
