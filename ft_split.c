/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:06:38 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:45:55 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countstrings(char const *s, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			res++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

static char	*cut_part(const char *s, int start, int end)
{
	char	*part;
	int		i;

	i = 0;
	part = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		part[i++] = s[start++];
	part[i] = '\0';
	return (part);
}

static void	add_to_result(char **result, const char *s, char c, int index)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j++] = cut_part(s, index, i);
			index = -2;
		}
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((countstrings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	index = -2;
	add_to_result(result, s, c, index);
	return (result);
}
