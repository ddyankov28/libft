/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:30:19 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:52:54 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*b;
	unsigned char	*c;
	size_t			i;

	b = (unsigned char *) s1;
	c = (unsigned char *) s2;
	i = 0;
	while (b[i] == c[i] && b[i] && c[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (b[i] - c[i]);
}
