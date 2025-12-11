/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:15:28 by temit             #+#    #+#             */
/*   Updated: 2025/11/20 17:04:24 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkcinset(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		lenoff1;
	char		*s1trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && checkcinset(s1[start], set) == 1)
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && checkcinset(s1[end], set) == 1)
		end--;
	lenoff1 = end - start;
	s1trim = (char *)malloc((lenoff1 + 2) * sizeof(char));
	if (s1trim == NULL)
		return (NULL);
	ft_memcpy(s1trim, &s1[start], (lenoff1 + 1));
	s1trim[(lenoff1 + 1)] = '\0';
	return (s1trim);
}

static int	checkcinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
