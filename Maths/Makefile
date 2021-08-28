TARGET=fibonacci
OBJS=fibonacci.o main.o
LDFLAGS+=
CXXFLAGS+= $(CFLAGS) -std=c++14 #-Wall -Wextra -Werror

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

clean:
	rm *.o $(TARGET)