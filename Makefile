.PHONY:all clean

MAINSRC = main.cpp
OPT = -O3
CC = g++ $(OPT) -Wall
LIBS = -lm
RM = rm -rf
MKDIR = mkdir

OUTDIR = out
DIRS := $(OUTDIR)

EXE = $(OUTDIR)/lottery

SRC += \
	$(MAINSRC) \
	lottery.cpp \
	periods.cpp \
	lotteryData.cpp \
	fileUtils.cpp

OBJS = $(SRC:.cpp=.o)
OBJS := $(addprefix $(OUTDIR)/,$(OBJS))

all: $(DIRS) $(EXE)

$(DIRS):
	$(MKDIR) $@

$(EXE): $(OBJS)
	g++ -o $@ $^ $(LIBS)

$(OUTDIR)/%.o:%.cpp
	$(CC) -o $@ -c $^

clean:
	$(RM) $(EXE) $(DIRS)/*.o
