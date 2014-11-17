/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:36:00 by rdantzer          #+#    #+#             */
/*   Updated: 2014/11/12 16:07:44 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}