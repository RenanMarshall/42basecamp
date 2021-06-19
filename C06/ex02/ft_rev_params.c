#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argc[argv][i])
		{
			write (1, &argv[argc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
