/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:01:43 by pmisztal          #+#    #+#             */
/*   Updated: 2026/09/24 17:01:43 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char s, char c)
{
	if (s == c)
		return (0);
	else
		return (1);
}

int	wordcount(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && is_sep(s[i], c) == 1)
		{
			count++;
			while (s[i] != '\0' && is_sep(s[i], c) == 1)
				i++;
		}
		while (s[i] != '\0' && is_sep(s[i], c) == 0)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		debut;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	str = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && is_sep(s[i], c) == 1)
		{
			debut = i;
			while (s[i] != '\0' && is_sep(s[i], c) == 1)
				i++;
			str[j] = ft_substr(s, debut, i - debut);
			if (str[j] == NULL)
			{
				while (k < j)
				{
					free(str[k]);
					k++;
				}
				free(str);
				return (NULL);
			}
			j++;
		}
		while (s[i] != '\0' && is_sep(s[i], c) == 0)
			i++;
	}
	str[j] = NULL;
	return (str);
}

int	main(void)
{
}
