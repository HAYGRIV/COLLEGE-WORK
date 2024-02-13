#include<stdio.h>

int main()
{
	int j,ele;
	int flag = 0;
	int arr[10] = {11,22,33,44,11,55,66,77,11,88};
	printf("Enter Elements You Want to Search:");
	scanf("%i",&ele);
	
	for(j = 0;j < 10;j++)
	{
		if(arr[j] == ele)
		{
			flag = flag + 1;
		}
	}
	
	if(flag == 0)
	{
		printf("Element Not Found!!");
	}
	else
	{
		printf("Element Found!!");
	}
	
	return 0;
}
