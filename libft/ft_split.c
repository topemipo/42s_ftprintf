/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:51:15 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/20 20:05:13 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordscount(char const *s, char c);
static size_t	wordlength(char const *s, char c);
static char		*copyword(char const *s, size_t len);
static void		*free_memory(char **arr, size_t n);

char	**ft_split(char const *s, char c)
{
	char		**arrofs;
	size_t		arrindex;
	size_t		wordlen;
	size_t		noofwords;

	if (!s)
		return (NULL);
	noofwords = wordscount(s, c);
	arrofs = (char **)malloc(sizeof(char *) * (noofwords + 1));
	if (!arrofs)
		return (NULL);
	arrindex = 0;
	while (arrindex < noofwords)
	{
		while (*s == c)
			s++;
		wordlen = wordlength(s, c);
		arrofs[arrindex] = copyword(s, wordlen);
		if (!arrofs[arrindex])
			return (free_memory(arrofs, arrindex));
		arrindex++;
		s = s + wordlen;
	}
	arrofs[arrindex] = NULL;
	return (arrofs);
}

static size_t	wordscount(char const *s, char c)
{
	size_t		i;
	size_t		wordscount;

	i = 0;
	wordscount = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			wordscount++;
		i++;
	}
	return (wordscount);
}

static size_t	wordlength(char const *s, char c)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[wordlen] && s[wordlen] != c)
		wordlen++;
	return (wordlen);
}

static char	*copyword(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_memory(char **arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}
