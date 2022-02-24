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
	size_t	slen;
	char	*str;

	slen = ft_strlen(s);
	if (start > slen)
		slen = 1;
	else
		slen = slen - start;
	if (len < slen)
		slen = len;
	str = malloc(sizeof(char) * slen);
	if (!str)
		return (NULL);
	i = 0;
	while (*(s + start) && i < slen && slen != 1)
	{
		str[i] = *(s + start);
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
