NAME	=	megaphone
SRCS	=	megaphone.cpp
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

$(NAME):
	@$(CC) $(SRCS) $(FLAGS) -o $(NAME)
	@echo "You can now run ./$(NAME), enjoy!"

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all