#include <stdio.h>

int main(void)
{
	int a[5];
	int *p;

	/* Initialize array element at index 2 */
	a[2] = 102;
	/* Set pointer p to address of a[2] - 2 */
	p = &a[2] - 2;

	/* Your code goes here */
	/* Update the value at the calculated memory location (a[2]) to 98 */
	*(p + 5) = 98;

	/* Print the updated value of a[2] */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

