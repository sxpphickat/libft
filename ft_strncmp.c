/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:28:28 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/05 09:21:57 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_zise;

int	ft_strncmp(const char *s1, const char *s2, t_zise len)
{
	t_zise	i;

	if (len == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i < len - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[10] = "aaa";
	char	st2[10] = "aaz";
	printf("output: %i\n", ft_strncmp(str, st2, 5));
	printf("output: %i\n", strncmp(str, st2, 5));
}*/
