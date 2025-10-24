CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -g -O0 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

all: hello debug_example

hello: hello.cpp
	$(CXX) $(CXXFLAGS) hello.cpp -o hello

debug_example: debug_example.cpp
	$(CXX) $(CXXFLAGS) debug_example.cpp -o debug_example

clean:
	rm -f hello debug_example

