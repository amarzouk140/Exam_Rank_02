#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i])
    {
		j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
#include <stdio.h>
#include <string.h>

int main() 
{
    const char *str1 = "hello World!";
    const char *str2 = "whllo World";

    size_t length = strcspn(str1, str2);

    printf("Length of initial segment without vowels: %zu\n", length);

    return 0;
}