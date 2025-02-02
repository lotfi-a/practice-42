/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:12:52 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 11:37:08 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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

int	is_palindrome(char *str)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (i >= 0)
	{
		if (str[i] != str[j])
			return (0);
		i--;
		j++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (2);
	}
	if (is_palindrome(av[1]) == 1)
		ft_putstr(av[1]);
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
