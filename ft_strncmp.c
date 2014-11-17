/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:16:08 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:08:41 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while ((n > 1) && (s1[i] != 0 && s2[i] != 0) && (s1[i] == s2[i]))
	{
		i++;
		n--;
	}
	if (s1[i] - s2[i] < 0)
		return (-1);
	if (s1[i] - s2[i] > 0)
		return (1);
	return (0);
}
