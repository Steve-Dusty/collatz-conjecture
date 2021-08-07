CC = g++
CFLAGS = -s -O3
TARGET = collatz-algo

$(TARGET): main.cpp
	$(CC) $< $(CFLAGS) -o $@