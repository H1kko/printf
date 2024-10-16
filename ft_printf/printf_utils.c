/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maregnie <maregnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:12:08 by maregnie          #+#    #+#             */
/*   Updated: 2024/10/16 17:18:33 by maregnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_putchar(va_list args)
{
    write (1, args)
}

int    check_char(char *next, va_list args)
{
    int i;
    if (next[i] == '%')
    {
        if (next[i+1] == 'd' || next[i+1] == 'i')
            ft_putnbr(va_arg(args, int));
        else if (next[i+1] == 'c')
            ft_putchar(va_arg(args, int));
        else if (next[i+1] == 's')
            ft_putstr(va_arg(args, char *));
        else if (next[i+1] == 'p')
            ft_hexaconvert(next[+1], args);
        else if (next[i+1] == '%')
            ft_putchar(va_args('%', char));
        else if (next[i+1] == 'u')
            ft_putchar(args * -1, unsigned int);
        else if (next[i+1] == 'x')
            ft_hexaconvert(next[+1], args);
        else if (next[i+1] == 'X')
            ft_hexaconvert(next[+1], args);
        else
            return (-1);
    }
}