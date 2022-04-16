/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:39:53 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/15 15:08:10 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	dest_len = ft_str_length(dest);
	if (size <= dest_len)
		return (size + ft_str_length(src));
	while (dest[i] != '\0' && i < size - 1)
		i++;
	while (src[j] != '\0' && j < size - dest_len - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + ft_str_length(src));
}
