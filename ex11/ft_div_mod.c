/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:45:53 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/07 11:46:01 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int x = 10;
    int y = 5;
    int div;
    int mod;

    ft_div_mod(x, y, &div, &mod);
    printf("%d\n", div);
    printf("%d\n", mod);
}
*/