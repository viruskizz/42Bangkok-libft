/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:01:32 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 18:01:34 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0)
	{
		if (*str2 == '\0')
			return (1);
		if (*str1 - *str2 != 0)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
