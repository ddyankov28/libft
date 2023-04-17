/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:10:21 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:47:07 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*news;
	int		a;

	a = 0;
	news = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!news)
		return (NULL);
	while (s[a])
	{
		news[a] = s[a];
		a++;
	}
	news[a] = '\0';
	return (news);
}
