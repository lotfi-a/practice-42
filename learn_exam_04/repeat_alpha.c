/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:54:19 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 11:38:34 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define FALSE 0
#define TRUE 1

int	is_lowercase(char c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z'))
		return (TRUE);
	return (FALSE);
}

int	is_uppercase(char c)
{
	int	i;

	i = 0;
	if ((c >= 'A' && c <= 'Z'))
		return (TRUE);
	return (FALSE);
}

int	get_charpos(char c)
{
	if (is_uppercase(c))
		return (c - 'A' + 1);
	else if (is_lowercase(c))
		return (c - 'a' + 1);
	else
		return (-1);
}

int	main(int ac, char **av)
{
	int	pos;
	int	i;

	i = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (is_lowercase(av[1][i]) || is_uppercase(av[1][i]))
		{
			pos = get_charpos(av[1][i]) - 1;
			while (pos > 0)
			{
				write(1, &av[1][i], 1);
				pos--;
			}
		}
		if (!is_lowercase(av[1][i]) || !is_uppercase(av[1][i]))
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
