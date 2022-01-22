# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 03:54:41 by rfukuda           #+#    #+#              #
#    Updated: 2020/02/24 03:54:42 by rfukuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

TARGET = ft_display_file
SOURCES = main.c 
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

%.o: %.c
	gcc $(CFLAGS) -c $<

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
