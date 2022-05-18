/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:12:22 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/18 12:18:07 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	size_t	index;
	char	*temp;
	char	*tempsrc;

	temp = (char *)dest;
	tempsrc = (char *)src;
	index = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (index < n)
	{
		temp[index] = tempsrc[index];
		index++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[42] = "aaaa\0aaa";
	char dest[42];
	
	char str2[42] = "aaaa\0aaa";
	char dest2[42];
	memcpy(dest, str, 10);
	printf("output: %s\n", str);
	ft_memcpy(dest2, str2, 10);
	printf("output: %s\n", str2);
}*/
