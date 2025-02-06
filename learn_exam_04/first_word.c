/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:29:21 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/06 13:01:27 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define TRUE 1
#define FALSE 0

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (TRUE);
	return (FALSE);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		while (is_space(av[1][i]) && av[1][i])
			i++;
		{
			while (!is_space(av[1][i]) && av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
		break ;
	}
	write(1, "\n", 1);
	return (0);
}
