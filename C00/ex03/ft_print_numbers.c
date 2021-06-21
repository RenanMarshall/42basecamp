#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	numero;
	int n;

	numero = '0';
	while (numero <= '9')
	{
		putchar (numero);
		numero++;
	}
}
