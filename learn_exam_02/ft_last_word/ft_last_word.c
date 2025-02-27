/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:34 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 14:37:16 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] <= 32)
		i--;
	while (str[i] > 32)
		i--;
	i++;
	while (str[i] > 32)
		write(1, &str[i++], 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
