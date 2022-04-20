/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:55:34 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/20 13:07:33 by luisedua         ###   ########.fr       */
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
