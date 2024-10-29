/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:54:30 by mdahani           #+#    #+#             */
/*   Updated: 2024/09/11 18:23:00 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*result;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(len * sizeof(int));
	if (!result)
	{
		return (1);
	}
	*range = result;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main() {
    int i;
    int *tab;
    int size;
    
    i = 0;
    size = ft_ultimate_range(&tab, 1, 10);
    
    while ( i < size)
    {
        printf("%i", tab[i]);
        i++;
    }
    
    return 0;
}
*/
