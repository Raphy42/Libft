/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:15:57 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:07:48 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*newlist;
	void		*tmp;

	tmp = (void *)ft_memalloc(content_size + 1);
	tmp = (content) ? ft_memcpy(tmp, content, content_size) : NULL;
	newlist = (t_list *)ft_memalloc(sizeof(t_list));
	if (newlist)
	{
		newlist->content_size = (content) ? content_size : 0;
		newlist->next = NULL;
		newlist->content = tmp;
	}
	return (newlist);
}
