# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 03:55:39 by rfukuda           #+#    #+#              #
#    Updated: 2020/02/24 03:55:40 by rfukuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

TARGET = ft_hexdump
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

%.o:%.c
	gcc $(CFLAGS) -c $<

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
