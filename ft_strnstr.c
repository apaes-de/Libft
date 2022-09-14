/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:10:47 by apaes-de          #+#    #+#             */
/*   Updated: 2021/10/20 13:10:50 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	if (haystack == NULL && needle == NULL)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		y = 0;
		while (haystack[i] == needle[y])
		{
			if (needle[y + 1] == '\0' && i < len)
				return ((char *)haystack + i - y);
			y++;
			i++;
		}
		i = i - y + 1;
		y = 0;
	}
	return (NULL);
}
