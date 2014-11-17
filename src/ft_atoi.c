/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:23:17 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:07:35 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*skip_spaces(char *str)
{
	while (ft_isspace(*str))
		str++;
	return (str);
}

static int				char_to_int(const char *str)
{
	int					i;

	i = 0;
	while (*str && ft_isdigit((int)*str))
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i);
}

int						ft_atoi(const char *str)
{
	int					negative;

	negative = 1;
	str = skip_spaces((char *)str);
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return (char_to_int(str) * negative);
}
