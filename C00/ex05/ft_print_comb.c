#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	pri;
	int	seg;
	int	ter;

	pri = '0';
	while (pri <= '7')
	{
		seg = pri;
		while (++seg <= '8')
		{
			ter = seg;
			while (++ter <= '9')
			{
				ftputchar(pri);
				ftputchar(seg);
				ftputchar(ter);
				if (pri != '7' || seg != '8' || ter != '9') 
				{
					write(1, ", ", 2);
				}
			}
		}
		pri++;
	}
}
