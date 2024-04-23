/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:22:15 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:22:19 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

int	ft_create_result(char ***result, char *s)
{
	*result = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!*result)
		return (0);
	return (1);
}

void	ft_set_zero(int *i, int *j, int *l)
{
	*i = 0;
	*j = 0;
	*l = 0;
}

int	ft_jump_to_end(char *s, int i)
{
	if (s[i])
		i++;
	return (i);
}

int	ft_jump_to_word_end(char *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		l;

	ft_set_zero(&i, &j, &l);
	if (!s || !ft_create_result(&result, (char *) s))
		return (0);
	while (s[i])
	{
		i = ft_jump_to_word_end((char *)s, c, i);
		if (s[i])
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			result[l] = malloc(i - j + 1);
			ft_memcpy(result[l], &(s[j]), i - j);
			result[l][i - j] = 0;
			l++;
		}
		i = ft_jump_to_end((char *) s, i);
	}
	result[l] = 0;
	return (result);
}
