/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:46:12 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 15:58:22 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
int	main(void)
{
	int	nr;
	nr = ft_iterative_factorial(4);
	printf("%d\n", nr);
	return (0);
}
*/