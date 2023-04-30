/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayirmili <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:38:53 by ayirmili          #+#    #+#             */
/*   Updated: 2023/02/19 00:50:23 by ayirmili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	value;

	value = 1;
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (value);
}
