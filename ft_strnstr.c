/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:15:41 by rdantzer          #+#    #+#             */
/*   Updated: 2015/01/02 00:29:03 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int			i;
	int			y;
	size_t		x;

	i = 0;
	y = 0;
	x = 0;
	if (!(s2[y]))
		return ((char *)s1);
	while (x < n && s1[i])
	{
		if (s2[y] == s1[i])
			y++;
		else if (s1[i] != s2[y])
			y = 0;
		if (!(s2[y]))
			return ((char *)s1 + i - ft_strlen((char *)s2) + 1);
		i++;
		x++;
	}
	return (NULL);
}
