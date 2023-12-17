/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbohle <bbohle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:52:36 by bbohle            #+#    #+#             */
/*   Updated: 2023/11/13 15:35:29 by bbohle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_customstrncat(const char *s2, size_t s1len,
			size_t s2len, char *resub)
{
	size_t	counter;

	counter = 0;
	if (s2 != NULL)
	{
		while (counter < s2len)
		{
			resub[s1len + counter] = s2[counter];
			counter++;
		}
		resub[s1len + counter] = '\0';
	}
	return (resub);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*resub;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (ft_strdup(""));
	}
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	resub = (char *)malloc(s1len + s2len + 1);
	if (resub == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL && s1[0] != '\0')
	{
		ft_strlcpy(resub, (char *)s1, s1len + 1);
	}
	resub = ft_customstrncat(s2, s1len, s2len, resub);
	return (resub);
}
