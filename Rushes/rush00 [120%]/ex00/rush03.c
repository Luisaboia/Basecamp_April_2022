/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:21:23 by iaaugust          #+#    #+#             */
/*   Updated: 2022/04/10 03:56:19 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_line(char begin, char fill, char end, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(begin);
		}
		else if (i > 0 && i < x - 1)
		{
			ft_putchar(fill);
		}
		else
		{
			ft_putchar(end);
		}
		i++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0)
	{
		while (i < y)
		{
			if (i == 0)
			{
				put_line('A', 'B', 'C', x);
			}
			else if (i > 0 && i < y - 1)
			{
				put_line('B', ' ', 'B', x);
			}
			else
			{
				put_line('A', 'B', 'C', x);
			}
			i++;
		}
	}
}
