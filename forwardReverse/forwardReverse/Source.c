#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2, n3;
	float avg;
	printf("add the 1st number: \n");
	scanf_s("%d", &n1);
	printf("add the 2nd number: \n");
	scanf_s("%d", &n2);
	printf("add the 3rd number: \n");
	scanf_s("%d", &n3);

	avg = (n1 + n2 + n3) / 3;

	printf("these are your numbers in the order you entered them: %d - %d - %d\n", n1, n2, n3);
	printf("these are your numbers in the forward: %d - %d - %d\n", n3, n2, n1);

	printf("the average is %.2f\n", avg);

	if (n1 < n2 && n2 < n3) {
		printf("%d - %d - %d\n", n1,n2,n3);
	}
	else if (n1 > n2 && n2 > n3) {
		printf("%d - %d - %d\n", n3, n2, n1);
	}
	else if (n2 < n1 && n3 > n1) {
		printf("%d - %d - %d\n", n2, n1, n3);
	}
	else {
		printf("%d - %d - %d\n", n2, n3, n1);
	}
	system("PAUSE");
	

	return 0;
}

//1 2 3
//3 2 1

