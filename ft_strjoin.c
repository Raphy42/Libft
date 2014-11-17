/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 21:12:56 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:08:38 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*p;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		p = ft_strnew(len);
		p = ft_strdup(s1);
		p = ft_strcat(p, s2);
		return (p);
	}
	return (0);
}
