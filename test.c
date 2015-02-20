/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 11:26:48 by rdantzer          #+#    #+#             */
/*   Updated: 2015/02/20 05:00:50 by rdantzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static int	itobase_tests(void)
{
	char	*expected;
	char	*gained;

	gained = ft_itobase(2, 2);
	expected = "10";
	if (strcmp(gained, expected) != 0)
		return (-1);
	free(gained);
	gained = ft_itobase(214141231, 10);
	expected = "214141231";
	if (strcmp(gained, expected) != 0)
		return (-1);
	free(gained);
	gained = ft_itobase(123456789, 16);
	expected = "75BCD15";
	if (strcmp(gained, expected) != 0)
		return (-1);
	free(gained);
	return (1);
}

static int	atod_tests(void)
{
	double	dubs;

	dubs = -12.1236;
	if (ft_atod("-12.1236") != dubs)
		return (-1);
	dubs = 0.0;
	if (ft_atod("0") != dubs)
		return (-1);
	dubs = -47.2342;
	if (ft_atod("-47,2342") != dubs)
		return (-1);
	dubs = 127.0;
	if (ft_atod("    +127bas") != dubs)
		return (-1);
	dubs = 0;
	if (ft_atod("topkek10") != dubs)
		return (-1);
	return (1);
}

static int	arraylen_tests(void)
{
	char	**array;

	array = ft_strsplit("Hello there !", 0x20);
	if (ft_arraylen(array) != 3)
		return (-1);
	ft_arraydel(array);
	array = NULL;
	if (ft_arraylen(array) != 0)
		return (-1);
	return (0);
}

static int	strcasecmp_tests(void)
{
	if (ft_strcasecmp("TopKek", "TOPkek") != strcasecmp("TopKek", "TOPkek"))
		return (-1);
	if (ft_strcasecmp("LEL", "lel") != strcasecmp("LEL", "lel"))
		return (-1);
	return (1);
}

static int	strncasecmp_tests(void)
{
	if (ft_strncasecmp("TopKek", "TOPkek", 3) != strncasecmp("TopKek", "TOPkek", 3))
		return (-1);
	if (ft_strncasecmp("LEL", "lel", 3) != strncasecmp("LEL", "lel", 3))
		return (-1);
	return (1);
}

static int	basetol_tests(void)
{
	long	ret;

	ret = ft_basetol("10", 2);
	if (ret != 2)
		return (-1);
	ret = ft_basetol("75BCD15", 16);
	if (ret != 123456789)
		return (-1);
	return (1);
}

static void	assert(int (*f)(void))
{
	if (f() == -1)
		puts("FAILED");
	else
		puts("OK");
}

int			main(void)
{
	puts("Tests of libft's bonuses");
	puts("> FT_ITOBASE");
	assert(&itobase_tests);
	puts("> FT_ATOD");
	assert(&atod_tests);
	puts("> FT_ARRAYLEN & FT_ARRAYDEL");
	assert(&arraylen_tests);
	puts("> FT_STRCASECMP");
	assert(&strcasecmp_tests);
	puts("> FT_STRNCASECMP");
	assert(&strncasecmp_tests);
	puts("> FT_BASETOL");
	assert(&basetol_tests);
	return (0);
}