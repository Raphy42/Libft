/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 00:13:28 by rdantzer          #+#    #+#             */
/*   Updated: 2015/01/02 00:29:24 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map;
	t_list *add;
	t_list *tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	map = f(lst);
	tmp = map;
	lst = lst->next;
	while (lst != NULL)
	{
		add = f(lst);
		if (add == NULL)
			return (NULL);
		tmp->next = add;
		tmp = add;
		lst = lst->next;
	}
	return (map);
}
