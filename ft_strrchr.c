/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:42:31 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 20:42:34 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*buf;

	buf = NULL;
	if (c == '\0' || *str == '\0')
		return ("");
	while (*str != '\0')
	{
		if (*str == c)
			buf = (char *) str;
		str++;
	}
	return (buf);
}
