// child.cpp
//
// Takes one command-line argument: the number of loop iterations to run.
// Each iteration prints its PID, parent PID, and iteration number before
// and after sleeping for 1 second.

#include <iostream>
#include <cstdlib>    // atoi
#include <unistd.h>   // getpid, getppid, sleep

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <number_of_iterations>\n";
        return 1;
    }

    int iterations = std::atoi(argv[1]);

    for (int i = 1; i <= iterations; ++i) {
        std::cout << "[child] PID " << getpid()
                   << " | parent PID " << getppid()
                   << " | iteration " << i
                   << " | before sleeping\n";

        sleep(1);

        std::cout << "[child] PID " << getpid()
                   << " | parent PID " << getppid()
                   << " | iteration " << i
                   << " | after sleeping\n";
    }

    return 0;
}
