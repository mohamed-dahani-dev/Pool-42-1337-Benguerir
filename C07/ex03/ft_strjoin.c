/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:47:50 by mdahani           #+#    #+#             */
/*   Updated: 2024/09/14 20:47:15 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		j;
	int		c;

	string = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			string[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			string[c++] = sep[j++];
		}
		i++;
	}
	string[c] = '\0';
	return (string);
}

/*
int main() {
  
    int size = 4;
    char *tab[4];
    tab[0] = "1";
    tab[1] = "2";
    tab[2] = "3";
    tab[3] = "4";
    char sep[] = ",";
    
    printf("%s", ft_strjoin(size, tab, sep));

    return 0;
}
*/
