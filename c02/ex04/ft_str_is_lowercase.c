/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayirmili <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:13:09 by ayirmili          #+#    #+#             */
/*   Updated: 2023/02/12 17:14:58 by ayirmili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			value = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (value);
}
