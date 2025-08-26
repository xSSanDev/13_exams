#include <unistd.h>
int main(int argc, char *argv[])
{
	if(argc >= 2)
	{
		int i = 0;
		while(argv[i][argc - 1])
		{
			write(1,&argv[i][argc - 1],1);
			i++;
		}
	}

	write(1,"\n",1);
}
