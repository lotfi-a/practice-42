/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:06:05 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 15:58:46 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#define FALSE 0
#define TRUE 1

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	n = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
}

void	sum_prev_prime(int nb)
{
	int	i;
	int	res;

	i = 2;
	res = 0;
	while (i <= nb)
	{
		if (is_prime(i))
			res += i;
		i++;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putnbr(ft_atoi("0"));
		write(1, "\n", 1);
		return (0);
	}
	sum_prev_prime(ft_atoi(av[1]));
}
