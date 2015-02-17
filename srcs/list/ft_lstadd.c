/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:04:09 by rdantzer          #+#    #+#             */
/*   Updated: 2015/01/02 00:29:34 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd(t_list **alst, t_list *add)
{
	if (alst == NULL || add == NULL)
		return ;
	add->next = *alst;
	*alst = add;
}
