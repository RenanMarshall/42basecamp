#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ftputchar(*str);
		str++;
	}
}
