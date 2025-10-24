CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

hello: hello.cpp
	$(CXX) $(CXXFLAGS) hello.cpp -o hello

clean:
	rm -f hello

