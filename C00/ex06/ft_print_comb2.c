#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	pri;
	int	seg;

	pri = 0;
	seg = 0;
	while (pri <= 98)
	{
		seg = pri;
		while (++seg <= 99)
		{
			ft_putchar(pri / 10 + '0');
			ft_putchar(pri % 10 + '0');
			ft_putchar(' ');
			ft_putchar(seg / 10 + '0');
			ft_putchar(seg % 10 + '0');
			if (pri / 10 != 9 || pri % 10 != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		pri++;
	}
}
