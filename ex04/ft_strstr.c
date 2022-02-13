/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:21:16 by jv                #+#    #+#             */
/*   Updated: 2022/02/12 19:38:51 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (i < (n - 1)))
		i++;
	return ((int)(s1[i] - s2[i]));
}

unsigned int	ft_strlen(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str++)
		;
	return ((int)(str - tmp) - 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	size;

	size = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
			if (ft_strlen(str) < size)
				return (0);
		if (ft_strncmp(str, to_find, size) == 0)
			return (str);
		str++;
	}
	return (0);
}
