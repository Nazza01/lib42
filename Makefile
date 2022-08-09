# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 23:45:33 by Nathanael         #+#    #+#              #
#    Updated: 2022/08/09 22:01:14 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# README
#	This makefile can be used in a Piscine style project (CPPModules, CPiscine etc)
# 	It will find all directories that you specify below
# 	
#	The below will find all directories starting with ex
#	TOFIND = ex
# 	Will find all folders starting with ex e.g: ex01, ex02, ex03
# 	
# 	As long as the corresponding folders have makefiles inside with the 
# 	following rules: clean all
#	the program will work, you can customise it as needed.

DIRS		:=	 ft_printf get_next_line libft personal

FINDALL_DIR	:=	$(addprefix libraries/, $(DIRS))

.DELETE_ON_ERROR:
.SILENT:

all: ca ma

ft:
	$(MAKE) -C libraries/ft_printf

printf:
	$(MAKE) -C libraries/get_next_line

gnl:
	$(MAKE) -C libraries/libft

personal:
	$(MAKE) -C libraries/personal

testft:
	gcc tests/ft.c -o ft.out -I inc -L libs -l ft
	leaks -atExit -- ./ft.out
	rm ft.out

testprf:
	gcc tests/printf.c -o printf.out -I inc -L libs -l ftprintf
	leaks -atExit -- ./printf.out
	rm printf.out

testgnl:
	gcc tests/gnl.c -o gnl.out -I inc -L libs -l gnl
	./gnl.out
	rm gnl.out

testper:
	gcc tests/per.c -o per.out -I inc -L libs -l per
	./per.out
	rm per.out

# Cleans all the subdirectories ready to eval
ca:
	for dir in $(FINDALL_DIR); do \
		$(MAKE) -C "$${dir}" clean; \
	done
	rm -rf libs incs *.out

# Makes all directories in the current folder structure
ma:
	mkdir -p libs incs
	for dir in $(FINDALL_DIR); do \
		$(MAKE) -C "$${dir}" all; \
		mv $${dir}/lib**.a libs; \
		cp $${dir}/includes/*.h incs/${dir}; \
	done

# Commits to github all current files
# 	Substitute github-link with a github link to push to github
github:
	git remote set-url origin github-link
	git add .
	echo "Please type a commit messsage"
	read COMMIT; \
	git commit -m "$$COMMIT"; \
	git push;

# Commits to git located at 42 vogsphere
#	Substitute 42-vog for your 42 intra project link
submit:
	git remote set-url origin 42-vog
	git add .
	echo "Please type a commit message"
	read COMMIT; \
	git commit -m "$$COMMIT"; \
	git push

testalllib: all testft testpr
	
