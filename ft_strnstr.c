/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:21:22 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 18:21:24 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_cmp(const char *str1, const char *str2, int n);

char	*ft_strnstr(const char *str, const char *find, size_t size)
{
	int		i;

	i = 0;
	while (i < (int) size && *str)
	{
		if (my_cmp(str, find, size - i))
			return ((char *) str);
		str++;
		i++;
	}
	return (0);
}

static int	my_cmp(const char *str1, const char *str2, int n)
{
	while (*str1 && *str2)
	{
		if (*str1++ != *str2++)
			return (0);
		if (n < 0)
			return (0);
		n--;
	}
	return (1);
}
