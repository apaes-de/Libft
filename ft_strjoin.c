/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:55:02 by apaes-de          #+#    #+#             */
/*   Updated: 2021/10/26 13:55:04 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	r = (char *)ft_calloc(sizeof(char), (len_s1 + len_s2 + 1));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1, len_s1 + len_s2 + 1);
	ft_strlcpy(r + len_s1, s2, len_s1 + len_s2 + 1);
	return (r);
}
