CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
FUNCTIONS = src/*.c
FOLDER = obj
A_FILE = minilibmx.a
NAME = part_of_the_matrix
OBJECTS = obj/*.o

all: $(NAME) clean
$(NAME):
	@$(CC) $(CFLAGS) $(FUNCTIONS) -o $@ -I inc
clean:
	rm -rf src/*.h
uninstall: clean
	rm -rf $(NAME)
reinstall: uninstall all
