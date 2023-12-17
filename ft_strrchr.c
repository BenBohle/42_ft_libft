/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:36:21 by bbohle            #+#    #+#             */
/*   Updated: 2023/10/26 20:06:04 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int in)
{
	int		counter;
	char	ia;
	char	*tmp;

	ia = in;
	tmp = NULL;
	counter = 0;
	while (1)
	{
		if (*str == ia)
		{
			tmp = (char *)str;
		}
		if (*str == '\0' && tmp <= 0)
		{
			return (NULL);
		}
		if (*str == '\0' && tmp > 0)
		{
			return (tmp);
		}
		str++;
	}
}
