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

int	main(void)
{
	printf("substr => %s\n", ft_substr("araiva", 500, 2));
	char	**arr = ft_split("   a111    b222    c333", ' ');
	printf("%s,%s,%s\n", arr[0], arr[1], arr[2]);
	// char	**arr = ft_split("    xx xx   ii  ii   aa bbb", ' ');
	// printf("%s,%s,%s\n", arr[0], arr[1], arr[5]);
	return (0);
}
