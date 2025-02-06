/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:41:24 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 10:39:52 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_countdigits(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_itoa(int nbr)
{
	int		digits;
	int		i;
	long	n;
	char	*res;

	n = nbr;
	digits = ft_countdigits(n);
	res = malloc((digits + (nbr < 0 ? 1 : 0) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[i++] = '-';
		n = -n;
	}
	res[digits + (nbr < 0 ? 1 : 0)] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (n > 0)
	{
		res[digits + (nbr < 0 ? 1 : 0) - 1] = (n % 10) + '0';
		n /= 10;
		digits--;
	}
	return (res);
}
#include <stdio.h>

int	main(void)
{
	int		test_cases[] = {42, -42, 0, 123456, -123456, 2147483647,
				-2147483648};
	char	*result;

	for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		result = ft_itoa(test_cases[i]);
		printf("ft_itoa(%d) = \"%s\"\n", test_cases[i], result);
		free(result);
	}
	return (0);
}
