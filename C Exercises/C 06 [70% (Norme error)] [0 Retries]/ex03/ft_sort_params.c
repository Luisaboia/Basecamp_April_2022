/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:25:21 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/21 13:47:14 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char 	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort(char **str, int size, int offset)
{
	int		i;
	bool	trocado;

	i = offset;
	while (true)
	{
		i = offset;
		trocado = false;
		while (i < size)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap(&str[i], &str[i + 1]);
				trocado = true;
			}
			i++;
		}
		if (!trocado)
			break ;
	}
}

int	main(int a, char *b[])
{
	int	i;

	i = 0;
	if (a > 2)
		ft_sort(b, a - 1, 1);
	while (++i < a)
	{
		ft_putstr(b[a - i]);
		ft_putstr("\n");
	}
}
