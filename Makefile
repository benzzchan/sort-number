TARGET = sort

SRC_DIR = src
INC_DIR = includes

SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/quick_sort.c $(SRC_DIR)/printHelp.c

CC = gcc
CFLAGS = -Wall -Wextra -I$(INC_DIR)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)