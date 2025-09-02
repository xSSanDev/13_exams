/*Assignment name  : interval_spaces
Expected files   : interval_spaces.c
Allowed functions: write
--------------------------------------------------------------------------------

create a program that writes three whitespaces between each character in an argument,

if the number of arguments is different than 2 the program will return a newline

$> ./interval_spaces "abc" | cat -e
a   b   c$
$> ./interval_spaces "dubO a POIL" "ok" | cat -e
$
==========================================================================================
*/
#include <unistd.h>
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            write(1,&argv[1][i],1);
            if(argv[1][i + 1] != '\0')
            {
                write(1,"   ",3);
            }
            i++;
        }
    }
}