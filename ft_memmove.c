/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:44:44 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 15:44:46 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*cdest;
	char			*csrc;
	char			*temp;

	cdest = (char *) dest;
	csrc = (char *) src;
	temp = malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cdest[i] = temp[i];
		i++;
	}
	return (dest);
}
