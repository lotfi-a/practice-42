/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:03:51 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 12:05:35 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
	ft_putchar('\n');
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else
			ft_putnbr(i);
		i++;
	}
}
