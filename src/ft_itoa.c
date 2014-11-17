/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:09:05 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:07:46 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_size(int n)
{
	size_t		i;

	if (n < 0)
		n = n * -1;
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void		fill(char *number, unsigned int n)
{
	char		num;

	if (number && n)
	{
		num = (n % 10) + '0';
		n /= 10;
		fill(number - 1, n);
		*number = num;
	}
}

char			*ft_itoa(int n)
{
	size_t		count;
	char		*number;

	count = str_size(n);
	if (n < 0)
	{
		number = ft_strnew(count + 1);
		number[0] = '-';
		fill(number + count, n * -1);
	}
	else if (n == 0)
		number = ft_strdup("0");
	else
	{
		number = ft_strnew(count);
		fill(number + count - 1, n);
	}
	return (number);
}
