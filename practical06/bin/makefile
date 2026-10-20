CODE_PATH = $(shell realpath ../)

CC = gcc
CLIB_FLAGS = -lm
HEADERS = -I$(CODE_PATH)/src/
exec_name = practical06.ex
src_path = $(CODE_PATH)/src/

FILES = main.c\
	matmult.c

srcs = $(addprefix $(src_path),$(FILES) )

all: $(exec_name)

$(exec_name) : $(srcs)
	@echo ""
	@echo "Compiling: practical 06"
	@echo ""
	$(CC) $^ -o$@ $(HEADERS) $(CLIB_FLAGS)
	@echo ""
