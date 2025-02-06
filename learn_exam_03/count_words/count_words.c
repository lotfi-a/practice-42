/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:55:28 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 13:45:28 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_words(char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		j = 0;
		while (str[i] != 32 && str[i] && !(str[i] >= 9 && str[i] <= 13))
		{
			if (j == 0)
				c++;
			j++;
			i++;
		}
	}
	return (c);
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
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (2);
	}
	ft_putnbr(count_words(av[1]));
	return (0);
}
