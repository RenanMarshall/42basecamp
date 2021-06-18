#include <stdio.h>

void	ft_putnbr(int n);

int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(527);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -50");
    ft_putnbr(251056);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483646);
    printf("\n");
    return (0);
}