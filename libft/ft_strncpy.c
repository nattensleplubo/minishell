/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:10:32 by nburat-d          #+#    #+#             */
/*   Updated: 2022/05/20 11:22:14 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copie les "n" premiers caracteres de la chaine "str" et retourne une chaine 
de caractère allouée avec malloc().

1.La chaine de caractere à copier
2.Le nombre de caracteres à copier dans la nouvelle chaine
*/
char	*ft_strncpy(char *str, int n)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = cmalloc(sizeof(char) * (n + 1));
	if (!cpy)
		return (NULL);
	while (str[i] && i < n)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
