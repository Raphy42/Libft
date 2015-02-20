/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 21:56:21 by rdantzer          #+#    #+#             */
/*   Updated: 2015/02/20 04:49:46 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_arraylen(char **array)
{
	int			i;

	i = 0;
	if (array == NULL)
		return (0);
	while (array[i])
		i++;
	return (i);
}