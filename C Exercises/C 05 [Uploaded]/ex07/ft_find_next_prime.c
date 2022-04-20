/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:15:14 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/20 13:21:33 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div_comum;
	int	i;

	div_comum = 0;
	i = 1;
	if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				div_comum += 1;
			i++;
		}
	}
	if (div_comum == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int		i;

	i = nb;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}
