/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisedua <luisedua@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:40:16 by luisedua          #+#    #+#             */
/*   Updated: 2022/04/19 23:44:20 by luisedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fact_recursive_callback(int factorial, int number)
{
	factorial *= number--;
	if (number > 0)
		return (ft_fact_recursive_callback(factorial, number));
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_fact_recursive_callback(1, nb));
}
