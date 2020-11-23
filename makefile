CFLAGS=-g -Wall -Wextra -Werror -pedantic
CC=gcc
SRC=tests/binary_tree_print.c tests/0-main.c 0-binary_tree_node.c

0:
	$(CC) $(CFLAGS) $(SRC)
	@betty-style $(SRC)
	@betty-doc $(SRC)
