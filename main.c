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
	printf("A => %c\n", ft_toupper('a'));
	printf("a => %c\n", ft_tolower('A'));
	printf("abc = abc ? %d\n", ft_memcmp("abc", "abc", 5));
	printf("strchr = %s\n", ft_strchr("araiva.com", 'i'));
	printf("strchr = %s\n", ft_strchr("araiva.com", 'z'));
	printf("strchr = %s.\n", ft_strchr("", '\0'));
	printf("strchr = %s.\n", strchr("", '\0'));
	printf("strrchr = %s\n", ft_strrchr("araiva.com", '.'));
	printf("strrchr = %s\n", ft_strrchr("araiva.com", 'z'));
	printf("strrchr = %s.\n", ft_strrchr("", '\0'));
	printf("strrchr = %s.\n", strrchr("", '\0'));
	return (0);
}
