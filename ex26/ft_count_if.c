/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:48:07 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/15 16:42:43 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>

int contains_letter_a(char *str) 
{
    while (*str) 
    {
        if (*str == 'a') 
	{
            return 1;
        }
        str++;
    }
    return 0;
}

int main() 
{
    char *strings[] = {"hello", "world", "haribo", "example", 0};

    printf("'a' : %d\n", ft_count_if(strings, contains_letter_a));

    return 0;
}*/
