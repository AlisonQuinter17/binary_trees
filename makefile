CFLAGS=-g -Wall -Wextra -Werror -pedantic
CC=gcc

%:
	$(CC) $(CFLAGS) $(SRC)
	@betty-style $(SRC)
	@betty-doc $(SRC)

0: SRC=tests/binary_tree_print.c tests/0-main.c 0-binary_tree_node.c
1: SRC=tests/$*-main.c $*-*.c 0-*.c tests/binary_tree_print.c
2: SRC=tests/$*-main.c $*-*.c 0-*.c tests/binary_tree_print.c
