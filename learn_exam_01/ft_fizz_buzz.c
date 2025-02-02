#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	long	n;
	
	n = nb;
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
	ft_putchar('\n');
}
int	main()
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else
			ft_putnbr(i);
		i++;
	}
}
