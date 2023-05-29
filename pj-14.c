// program to accept 10 values into an array and print the sum of values
//  along with the biggest of them.
#include <stdio.h>
void main()
{
	int arr[10], c, tot=0, big, small;
	printf("Enter 10 values for the array :");
	for(c=0;c<10;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("\n Given values are:");
	tot=small=big=arr[0];
	for(c=1;c<10;c++)
	{
		printf("\n %d",arr[c]);
		tot=tot+arr[c];
		if (arr[c]>big)
			big=arr[c];
		if (arr[c]<small)
			small=arr[c];
	}
	printf("\n total is : %d",tot);
	printf("\n biggest value is : %d",big);
	printf("\n smallest value is : %d",small);
}
