/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maregnie <maregnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:22:22 by maregnie          #+#    #+#             */
/*   Updated: 2024/10/16 17:07:01 by maregnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>


int    ft_printf(const char *str, ...)
{
    int     i;
    int     j;
    char    **strs;
    va_list args;
    va_start(args, str);
    
    i = 0;
    j = 0;
    while (i < ft_strlen(str) - 1)
    {
        while (strs[i])
        {
            check_char(&str[i], args);    
            write (1, &str[i], 1);
            i++;
        }
        j++;
    }
    if (str[i] == '%')
        return (-1);
    write (1, &str[i], 1);
    return(j);
}
    #include <stdio.h>
int	main (int argc, char **argv)
{
    printf("je test la fonction printf % test test", 42);
	// (void) argc;
	// int	i;
	// i = 0;
	
	// char **test = ft_printf(argv[1]);

	// while (test[i])
	// {
	// 	printf("%s\n", test[i]);
	// 	free(test[i]);
	// 	i++;
	// }
	// free(test);
}