/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:15:41 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:08:43 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	str = (char *)s1;
	len = ft_strlen(s2);
	if (n < len)
		return (NULL);
	while (i < (int)n)
	{
		if (strncmp(str, s2, len) == 0)
			return (str);
		i++;
	}
	return (NULL);
}
