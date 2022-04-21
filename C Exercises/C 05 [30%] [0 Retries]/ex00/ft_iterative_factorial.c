/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:15:09 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/19 23:39:37 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i < nb + 1)
		fact = fact * i++;
	return (fact);
}
