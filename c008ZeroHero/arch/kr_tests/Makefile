CC := gcc
CFLAGS := -Wall -Wextra -std=c17 -O0 -g
SRC ?= main.c
OUT := result

KNOWN_TARGETS := all build run test clean help
FILE_FROM_GOAL := $(word 2,$(MAKECMDGOALS))

ifneq ($(FILE_FROM_GOAL),)
ifeq ($(filter $(FILE_FROM_GOAL),$(KNOWN_TARGETS)),)
SRC := $(FILE_FROM_GOAL)
$(eval $(FILE_FROM_GOAL):;@:)
endif
endif

.PHONY: all build run test clean help

all: run

build:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: build
	./$(OUT)

test: run

help:
	@echo "Example:"
	@echo "  make test ./t001.c"
	@echo "  make test SRC=./t001.c"
	@echo "  make run SRC=./t001.c"

clean:
	rm -f $(OUT)