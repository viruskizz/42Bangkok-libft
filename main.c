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
	printf("strnstr > %s = %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15), strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}
