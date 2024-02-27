#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp; 
}

int	main(void)
{
	int	n = 42;
	int	n2 = 140;

	printf("before \n%d \n%d\n", n, n2);
	ft_swap(&n, &n2);
	printf("after \n%d \n%d\n", n, n2);
}
