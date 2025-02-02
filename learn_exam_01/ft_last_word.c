/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:05:54 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 12:06:20 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_last_word(char *str)
{
	int		i;
	char	*c;

	i = ft_strlen(str);
	while (i-- > 0 && str[i] != ' ')
	{
		printf("%c", str[i]);
	}
}

int	main(void)
{
	char	str[] = "la mimi mimi mimi";

	ft_last_word(str);
}
