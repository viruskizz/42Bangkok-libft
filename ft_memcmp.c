/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:49:43 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 21:49:45 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int		i;
	char	*buf1;
	char	*buf2;

	i = 0;
	buf1 = (char *) str1;
	buf2 = (char *) str2;
	while (n > 0)
	{
		if (*buf2 == '\0')
			return (1);
		if (*buf1 - *buf2 != 0)
			return (*buf1 - *buf2);
		buf1++;
		buf2++;
		n--;
	}
	return (0);
}
