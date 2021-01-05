CC := g++
CCFLAG := -Wall -Wextra -Weffc++ -pedantic -O0 -std=c++17
DBGFLAG := -g
LIBS := -lGL -lGLU -lglut

BIN_PATH := bin
OBJ_PATH := obj
SRC_PATH := src
INC_PATH := inc
DBG_PATH := debug
TARGET_NAME := main

MAIN_SRC := $(SRC_PATH)/$(TARGET_NAME).c*
CCFLAG := $(CCFLAG) -I$(INC_PATH)
CCOBJFLAG := $(CCFLAG) -c
TARGET := $(BIN_PATH)/$(TARGET_NAME)
TARGET_DEBUG := $(DBG_PATH)/$(TARGET_NAME)

SRC := $(foreach x, $(SRC_PATH), $(wildcard $(addprefix $(x)/*,.c*)))
OBJ := $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))
OBJ_DEBUG := $(addprefix $(DBG_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))

DISTCLEAN_LIST := $(OBJ) $(OBJ_DEBUG)
CLEAN_LIST := $(TARGET) $(TARGET_DEBUG) $(DISTCLEAN_LIST)

default: all

$(TARGET): $(OBJ)
	$(CC) $(CCFLAG) -o $@ $? $(LIBS)

$(TARGET_DEBUG): $(OBJ_DEBUG)
	$(CC) $(CCFLAG) $(DBGFLAG) $? -o $@ $(LIBS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c*
	$(CC) $(CCOBJFLAG) -o $@ $< $(LIBS)

$(DBG_PATH)/%.o: $(SRC_PATH)/%.c*
	$(CC) $(CCOBJFLAG) $(DBGFLAG) -o $@ $< $(LIBS)

.PHONY: all
all: $(TARGET)

.PHONY: debug
debug: $(TARGET_DEBUG)

.PHONY: clean
clean:
	@echo CLEAN $(CLEAN_LIST)
	@rm -f $(CLEAN_LIST)

.PHONY: distclean
distclean:
	@echo CLEAN $(DISTCLEAN_LIST)
	@rm -f $(DISTCLEAN_LIST)
