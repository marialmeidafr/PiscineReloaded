/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:59:35 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/08 15:59:07 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	counter;
	int	i;

	counter = 1;
	i = 0;
	if (argc > 1)
	{
		while (counter < argc)
		{
			while (argv[counter][i])
			{
				ft_putchar(argv[counter][i]);
				i++;
			}
			i = 0;
			ft_putchar('\n');
			counter++;
		}
	}
}
