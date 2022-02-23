/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:15:57 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/23 21:16:00 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (*(s + start) && i < len)
	{
		str[i] = *(s + start);
		i++;
		start++;
	}
	while (i <= len)
		str[i++] = '\0';
	return (str);
}
