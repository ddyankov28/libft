/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:36:13 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:54:42 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (a[i])
		i++;
	while (a[i] != (unsigned char)c && i > 0)
		i--;
	if (a[i] == (unsigned char)c)
		return ((char *)a + i);
	else
		return (NULL);
}
