/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:19:09 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/03 16:06:53 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return(1);
		return(0);
}

 #include <stdio.h>
 int  main(void)
 {
 	printf("output: %i\n", ft_isalpha(' '));
 }
