/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayirmili <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:41:57 by ayirmili          #+#    #+#             */
/*   Updated: 2023/02/04 06:14:09 by ayirmili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_write(char a)
{
	write(1, &a, 1);
}

void	comma_space(int a, int b, int c)
{
	put_write('0' + a);
	put_write('0' + b);
	put_write('0' + c);
	if (a != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				comma_space(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
