#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc < 2)
		return (0);
	int	i = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;	
	while (argv[1][i] != ' ')
	{
		printf("%c", argv[1][i]);
		i++;
	}
}
