#include <unistd.h>

int ft_doubles(char *str, char c, int p)
{
   int i = 0;

   while ( i < p)
   {
    if (str[i] == c)
        return (0);
        i++;
   }
   return (1);
}

int main(int ac, char **av)
{
    int i = 0;
    int y;
    
    if (ac == 3)
    {
        while(av[1][i] != '\0')
        {
            y = 0;
            while(av[2][y] != '\0')
            {
                if (av[1][i] == av[2][y])
                {
                    if(ft_doubles(av[1], av[1][i], i) == 1)
                    {
                        write(1, &av[1][i], 1);
                        break;
                    }
                }
                y++;
            }
            i++;
        }

    }
    write(1, "\n", 1);
}