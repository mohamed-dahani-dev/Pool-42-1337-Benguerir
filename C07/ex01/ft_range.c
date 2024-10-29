/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:48:09 by mdahani           #+#    #+#             */
/*   Updated: 2024/09/11 18:13:50 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	len;
	int	i;

	len = max - min;
	result = malloc(len * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
    int min;
    int max;
    int i;
    int len;
    int *tab;

    min = 1;
    max = 10;
    i = 0;
    len = max - min;
    tab = ft_range(min, max);

    while ( i < len)
    {
        printf("%i", tab[i]);
        i++;
    }
}
*/
