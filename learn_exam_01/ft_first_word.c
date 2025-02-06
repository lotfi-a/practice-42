/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:03:47 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 14:34:23 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	ft_first_word(argv[1]);
}
