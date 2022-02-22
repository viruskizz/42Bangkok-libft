/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:37:38 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/22 10:37:43 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	printf("strchr > %s = %s\n", ft_strchr("araiva", 0), strchr("araiva", 0));
	printf("strrchr = %s.\n", ft_strrchr("", '\0'));
	return (0);
}
