NAME = convert
SRC = convert.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++03
INCLUDES = -I includes/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@printf "Linking $@\n"
	@clang++ $(OBJ) -o $(NAME)

%.o: %.cpp
	@printf "Compiling $@\n"
	@clang++ $(FLAGS) $(INCLUDES) -c $? -o $@

run: $(NAME)
	@./$(NAME)

clean:
	@printf "Deleting object files\n"
	@$(RM) $(OBJ)

fclean: clean
	@printf "Deleting executable\n"
	@$(RM) $(NAME)

re: fclean all
