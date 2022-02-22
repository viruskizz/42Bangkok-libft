/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:38:31 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 21:38:33 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*buf;

	i = 0;
	buf = (char *) str;
	while (i < n && buf)
	{
		if (*buf == c)
			return ((char *) str);
		str++;
		buf++;
		i++;
	}
	return (NULL);
}
