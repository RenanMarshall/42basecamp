#include <unistd.h>

void	ft_putchar(char c);

void	rush (int x, int y)
{

	int	ca;
	int	cl;

	cl = 1;  
	ca = 1;
	{

		while (ca <= y)
		{
			while (cl <= x)
			{
				if ((ca == 1 && cl == 1) || (ca == y && cl == 1))
				ft_putchar('A');
				else if ((ca == 1 && cl == x) || (ca == y && cl == x))
				ft_putchar('C');
				else if ((ca == 1) || (ca == y) || (cl == 1) || (cl == x))
				ft_putchar('B');
				else
				ft_putchar(' ');
				cl++;
			}
			ft_putchar('\n');
			ca++;
			cl = 1;
		}

	}
}
