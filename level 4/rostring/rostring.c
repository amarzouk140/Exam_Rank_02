#include <unistd.h>

void write_word(char *str, int start, int end) {
    while (start < end)
        write(1, &str[start++], 1);
}

int main(int argc, char **argv) {
    int i = 0, start, end, flag = 0;

    if (argc > 1 && argv[1][0]) 
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t') 
        i++;  
        start = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t') 
        i++;
        end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t') 
        i++;

        while (argv[1][i]) 
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t') 
            {
                if (flag) 
                write(1, " ", 1);
                flag = 1;
                while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                    write(1, &argv[1][i++], 1);
            } 
            else
                i++;
        }
        if (flag) 
            write(1, " ", 1);
        
        write_word(argv[1], start, end);
    }
    write(1, "\n", 1);
    return 0;
}
