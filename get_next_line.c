/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:32:09 by mhaddou           #+#    #+#             */
/*   Updated: 2024/12/07 07:24:17 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
    char *buffer;
    ssize_t pos_nl;
    static char *rem;
    char *temp;
    ssize_t br;
    char *line;
    
    buffer = malloc(BUFFER_SIZE*(BUFFER_SIZE >= 0) + (BUFFER_SIZE >= 0));
	if (fd < 0 || !buffer)
		return (free(buffer),NULL);
    br = read(fd,buffer,BUFFER_SIZE);
    while (br > 0)
    {
        if(ft_strnl(buffer) != -1)
            break;
        br = read(fd,buffer,BUFFER_SIZE);
    }
    if(br < 0)
        return(free(buffer), rem = NULL, NULL);
    return(line);
}
int main(void)
{
    char *str;
    int fd = open("s.x",O_RDWR);
    printf("%d\n",fd);
    printf("%ld\n",read(fd,str,10));
    return(0);
}