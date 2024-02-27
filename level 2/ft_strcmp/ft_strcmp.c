#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("ayman", "Ayman")); 
// 	printf("%d\n", ft_strcmp("Hello", "hello")); 
// 	printf("%d\n", ft_strcmp("test", "test")); 
// 	printf("%d\n", ft_strcmp("hey", "he")); 
// 	printf("%d\n", ft_strcmp("", "")); 
// }
