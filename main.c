/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:58:14 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/19 14:17:18 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'c';
	printf("-------------ft_isalpha------------\n");
	printf("%d\n", ft_isalpha(c));
	printf("-------------ft_isdigit------------\n");
	printf("%d\n", ft_isdigit(c));
	printf("-------------ft_isalnum------------\n");
	printf("%d\n", ft_isalnum(c));
	printf("-------------ft_isascii------------\n");
	printf("%d\n", ft_isascii(c));
	printf("-------------ft_isprint------------\n");
	printf("%d\n", ft_isprint(c));
	printf("-------------ft_toupper------------\n");
	printf("%c\n", ft_toupper(c));
	printf("-------------ft_tolower------------\n");
	printf("%c\n", ft_tolower(c));
	return (0);
}
