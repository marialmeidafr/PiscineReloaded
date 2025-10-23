/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:55:15 by mariaalm          #+#    #+#             */
/*   Updated: 2025/10/07 15:41:07 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	array = malloc(sizeof(int) * (size + 1));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int main() 
{
    int min = 1;
    int max = 5;
    int *range = ft_range(min, max);

    if (range != NULL) 
	{
        int i = 0;
        while (i < max - min) 
		{
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    } 
	else 
        printf("NULL pointer returned\n");
    return 0;
}
*/