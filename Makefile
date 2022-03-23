# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 23:45:33 by Nathanael         #+#    #+#              #
#    Updated: 2022/03/23 22:02:48 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####################################################
#					DIRECTORIES						#
#####################################################
SRCDIR	=	sources
OBJDIR	=	objects
BLDDIR	=	build
INCDIR	=	headers
LIBDIR	=	libraries

TEMPDIR	=	$(BLDDIR) $(OBJDIR)

#####################################################
#					FILES							#
#####################################################
SOURCES	:=	$(wildcard $(SRCDIR)/*.c)
INCLUDES:=	$(wildcard $(INCDIR)/*.h)
OBJECTS	:=	$(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

#####################################################
#					COMPILER/FLAGS					#
#####################################################
NAME 	=	lib42.a
CC		=	gcc
RM		=	rm -rf
MKDIR	=	mkdir -p
MAKELIB	=	ar -rcs
CFLAGS	=	-Wall -Wextra -Werror -I $(INCDIR)

#####################################################
#					COMMANDS						#
#####################################################
all: dirs $(BLDDIR)/$(NAME)

dirs:
	@$(MKDIR) $(TEMPDIR)
	@printf "Made directories: %s\n" $(TEMPDIR)
	@printf "Proceeding to build program\n"

$(BLDDIR)/$(NAME): $(OBJECTS)
	@$(MAKELIB) $@ $^
	@clear
	@printf "Library %s built successfully\n" $@

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@clear
	@printf "Linked %s to %s\n" $< $@

clean:
	@$(RM) $(TEMPDIR)
	@clear
	@printf "Cleaned directories: %s\n" $(TEMPDIR)

re: clean all
	@printf "Cleaned and remade all files!\n"
