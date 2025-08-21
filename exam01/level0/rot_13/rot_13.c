#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            char c = argv[1][i];
            
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
            {
                c += 13;
            }
            else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
            {
                c -= 13;
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    
    return 0;
}

