/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:23:20 by laanikid          #+#    #+#             */
/*   Updated: 2025/02/02 12:07:23 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// manipulation des pointeur
#include <stdio.h>

int	main(void)
{
	int	x;
	int	*p;
	int	**pp;

	x = 42;
	p = &x;
	pp = &p;
	printf("La valeur de x: %d\n", x);
	printf("La valeur pointee par p: %d\n", *p);
	if (pp != NULL && *pp != NULL)
	{
		printf("La valeur pointée par pp: %d\n", **pp);
	}
	else
	{
		printf("Le pointeur pp ou son pointeur interne est NULL\n");
	}
	return (0);
}
