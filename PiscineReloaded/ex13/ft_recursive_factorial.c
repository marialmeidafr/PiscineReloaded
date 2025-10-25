/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:46:53 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/07 15:39:20 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (i);
	i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return (0);
}
*/