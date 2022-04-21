/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:16:14 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/20 12:33:20 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_callback(int n, int p, int result)
{
	if (p-- > 0)
		return (ft_recursive_callback(n, p, result *= n));
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive_callback(nb, power, 1));
}
