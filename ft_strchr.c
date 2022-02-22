/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:28:55 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 21:28:57 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*buf;

	buf = NULL;
	if (c == '\0' || *str == '\0')
		return ("");
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
