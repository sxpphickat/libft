/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:19:17 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/06 14:57:58 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;	
	while (src[i] && i < size)	
	{
		dst[i] = src[i];
		i++;
	}
	return (l);	
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[42] = "123456789";
	char dest[42];
	int	aa;
	aa = ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%i\n", aa);
}