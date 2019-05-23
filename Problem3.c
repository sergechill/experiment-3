#include <stdio.h>
#include <string.h>

int main()
{
	char arr[7] = {'e', 'n', 'g', '1', '9', '0', '7'};
	int i;
	
	for(i=6;i>=0;i--)
	{
		printf("%c",arr[i]);
	}
	
	printf("Array Size: %d",strlen(arr));
	
	return 0;
}
