#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2, n3;
	printf("add the 1st number: \n");
	scanf_s("%d", &n1);
	printf("add the 2nd number: \n");
	scanf_s("%d", &n2);
	printf("add the 3rd number: \n");
	scanf_s("%d", &n3);


	printf("these are your numbers in the order you entered them: %d - %d - %d", n1, n2, n3);
	system("PAUSE");
	return 0;
}