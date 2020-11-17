#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int counter = 0;

	while (av[counter] != 0)
	{
		printf("Argument:%s\n", av[counter]);
		counter = counter + 1;
	}
	return(counter);
}
