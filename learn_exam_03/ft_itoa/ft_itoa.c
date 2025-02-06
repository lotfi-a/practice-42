/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:41:24 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 20:23:47 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	nb_len(long n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	n;
	char	*new;
	int		len;

	n = nbr;
	if (n == 0)
	{
		new = malloc(sizeof(char *));
		new[0] = '0';
		return (new);
	}
	len = (n < 0) ? 2 : 1;
	len += nb_len(n);
	new = malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	new[len] = '\0';
	if (n < 0)
		new[0] = '\0';
	while (n)
	{
		new[--len] = n % 10 + '0';
		n /= 10;
	}
	return (new);
}
