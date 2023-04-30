/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayirmili <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:51:18 by ayirmili          #+#    #+#             */
/*   Updated: 2023/02/19 01:02:18 by ayirmili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	value;

	value = 1;
	if (nb > 0)
	{
		value *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (value);
}
