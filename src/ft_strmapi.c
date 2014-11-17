/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 01:33:25 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/11 14:47:20 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*p;
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = ft_strdup(s);
		if (!str)
			return (NULL);
		p = str;
		while (*str)
		{
			*str = f(i++, *str);
			str++;
		}
	}
	return (p);
}
