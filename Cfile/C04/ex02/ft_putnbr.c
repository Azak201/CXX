#include <unistd.h>
#include <stdio.h>

void	print_nu(int number)
{
	number = number + 48;
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	print_nu(nb % 10);
}

/*int main (void)
{
	printf("This should be 2147483647\n");
	ft_putnbr(2147483647);
	printf("\nThis should be -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nThis should be 0\n");
	ft_putnbr(0);
	printf("\nThis should be 1\n");
	ft_putnbr(1);
	printf("\nThis should be 42\n");
	ft_putnbr(42);
	printf("\n");
	return (0);
}*/
