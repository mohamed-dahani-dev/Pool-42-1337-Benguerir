/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:41:12 by mdahani           #+#    #+#             */
/*   Updated: 2024/09/12 21:14:38 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = ac - 1;
		j = 0;
		while (i >= 1)
		{
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			i--;
		}
	}
}
