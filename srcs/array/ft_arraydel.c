/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 21:25:43 by rdantzer          #+#    #+#             */
/*   Updated: 2015/02/20 04:49:21 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			ft_arraydel(char **array)
{
	if (array == NULL)
		return ;
	while (*array != NULL)
		free(*array++);
	*array = NULL;
}