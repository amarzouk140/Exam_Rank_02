#include <unistd.h>

int main(int ac, char **av)
{
	int count = 0;
	int i = 0;
	if( ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 'a' +1;

			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 'A' +1;

			while(count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
			count =1;
		}
	}
	write(1, "\n", 1);
}
