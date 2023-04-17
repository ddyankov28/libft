/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:33:54 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:55:48 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (s)
	{
		if (start >= ft_strlen(s))
			return (ft_strdup(""));
		if (ft_strlen(s) > len)
			subs = (char *)malloc(sizeof(char) * (len + 1));
		if (ft_strlen(s) <= len)
			subs = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
		if (!subs)
			return (NULL);
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			subs[i] = s[start + i];
			i++;
		}
		subs[i] = '\0';
		return (subs);
	}
	return (0);
}
