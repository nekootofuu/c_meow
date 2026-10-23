#include <stdio.h>

int	main(void)
{
	int	class_time[7];
	int	max_pos=0;
	int	sum;

	max_pos = 0;
	for (int i = 0; i < 7; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		sum = a + b;
		class_time[i] = sum;
	}
	for (int i = 0; i < 7; i++)
	{
		if (class_time[i] > 8)
		{
			if (class_time[max_pos] < class_time[i])
			{
				max_pos = i;
			}
		}
	}
	if (class_time[max_pos]<=8)
	{
		printf(0);
	}
	else
	{
		printf("%d", max_pos + 1);
	}
	return (0);
}
