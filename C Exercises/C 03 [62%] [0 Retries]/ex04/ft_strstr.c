/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:30:32 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/14 20:52:46 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i - j]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
