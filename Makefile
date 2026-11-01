CC = cc
CFLAGS = -std=c17 -Wall -Wextra -Wpedantic -Werror -g
CPPFLAGS = -Isrc
.PHONY: all run test exercise-test sanitize clean
all: build/life
build:
	mkdir -p build
build/life: src/main.c src/grid.c src/life.c src/life.h | build
	$(CC) $(CPPFLAGS) $(CFLAGS) src/main.c src/grid.c src/life.c -o $@
build/test_grid: tests/test_grid.c src/grid.c src/life.h | build
	$(CC) $(CPPFLAGS) $(CFLAGS) tests/test_grid.c src/grid.c -o $@
build/test_life: tests/test_life.c src/grid.c src/life.c src/life.h | build
	$(CC) $(CPPFLAGS) $(CFLAGS) tests/test_life.c src/grid.c src/life.c -o $@
run: all
	./build/life
test: build/test_grid
	./build/test_grid
exercise-test: build/test_life
	./build/test_life
sanitize:
	$(MAKE) clean
	$(MAKE) CFLAGS="$(CFLAGS) -fsanitize=address,undefined -fno-omit-frame-pointer" all test
clean:
	rm -rf build
