/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 13:07:02 by rdantzer          #+#    #+#             */
/*   Updated: 2015/03/05 13:11:28 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strndup(const char *s, size_t n)
{
	char		*str;
	size_t		len;

	len = ft_strlen(s);
	if (n < len)
		len = n;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	return ((char *)ft_memcpy(str, s, len));
}
