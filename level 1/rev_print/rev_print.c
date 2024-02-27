#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int x;
	x = ft_strlen(str);
	while (x >= 0) 
	{
		write(1, &str[x], 1); 
		x--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "namtab";
		ft_rev_print(str);
}
