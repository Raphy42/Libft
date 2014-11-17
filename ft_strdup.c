/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:54:08 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:08:34 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char		*buf;
	size_t		len;

	len = ft_strlen(s1);
	buf = ft_strnew(len);
	if (buf == NULL)
		return (buf);
	ft_strcpy(buf, s1);
	return (buf);
}
