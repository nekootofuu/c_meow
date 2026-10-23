#include <stdio.h>

void	swap(int *pa, int *pb)
{
	int	temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int	main(void)
{
	int a = 5;
	int b = 6;
	swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}