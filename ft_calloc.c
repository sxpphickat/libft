/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:47:20 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/19 12:13:00 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*vp;

	if (size == 0 || nmemb == 0)
	{
		nmemb = 1;
		size = nmemb;
	}
	vp = malloc(nmemb * size);
	if (vp == NULL)
		return (NULL);
	ft_bzero(vp, nmemb * size);
	return (vp);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*array;
	int	i;

	i = 0;
	array = (char *)ft_calloc(2, 2);
	while (i < 22)
	{
		if (array[i] == 0)
			printf("\\0");
		else
			printf("%c", array[i]);
		i++;
	}
	printf("\n");
	return(0);
}*/
