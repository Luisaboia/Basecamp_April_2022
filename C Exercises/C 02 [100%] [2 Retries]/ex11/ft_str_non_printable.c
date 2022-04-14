/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:01:37 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/14 01:38:36 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	current;

	index = 0;
	while (true)
	{
		current = str[index];
		if (current == '\0')
			break ;
		if (is_char_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		index++;
	}
}
