
CXX = g++ # compiler
CXXFLAGS = -Wall -g -O2 -pipe #-I ~/Dropbox/software/eigen-eigen-1306d75b4a21 # compiler option, -Wall enables strict warnings
TARGET = a.out # the name of the program you want to make
SRCS = main.cpp formnishi.cpp # the names of all source files
DEPS = nlib.h  # header; a dependency of *.o files
OBJS := $(SRCS:.cpp=.o) # change the suffix from cpp to o

$(TARGET): $(OBJS)
	g++ -Wall -o $@ $(OBJS)
$(OBJS): $(DEPS)	# enable rebuilding with changing header

clean:
	rm -f $(TARGET) $(OBJS)

