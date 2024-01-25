GREEN		= 	\033[0;32m
RED			= 	\033[0;31m
RESET		= 	\033[0m

NAME		=	ex00

OBJ			=	$(patsubst src%, obj%, $(SRC:.cpp=.o))

SRC			=	src/main.cpp \
				src/Animal.cpp \
				src/Cat.cpp \
				src/WrongCat.cpp \
				src/WrongAnimal.cpp \
				src/Dog.cpp

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all:		obj $(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $@ $^

obj:
			@mkdir -p obj

obj/%.o:	src/%.cpp
			@$(CC) $(FLAGS) -o $@ -c $<
			@echo "$@ $(GREEN)created$(RESET)"

valgrind:	all
	valgrind --leak-check=full --show-leak-kinds=all ./ex00

clean:
			@rm -rf $(OBJ) obj
			@echo "Object files $(RED)removed.$(RESET)"

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all valgrind clean fclean re