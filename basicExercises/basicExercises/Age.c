#include <stdio.h>
#include <stdlib.h>

int main()
{	
	printf("add your age: \n");
	int inAge;
	scanf_s("%d", &inAge);	
	printf("you are %d yrs old \n", inAge);
	system("PAUSE");
	return 0;
}