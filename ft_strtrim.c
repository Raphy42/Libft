/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 21:12:22 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/17 17:28:16 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		start;
	int			i;
	int			len;

	start = 0;
	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i >= 0 && ft_isspace(s[i]))
		{
			len--;
			i++;
		}
		while (s[start] && ft_isspace(s[start]))
			start++;
		len -= start;
		if (len < 0)
			return (ft_strdup(""));
		return (ft_strsub(s, start, len));
	}
	return (0);
}
