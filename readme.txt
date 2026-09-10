Name: Justin von zur Muehlen
Date: 9/9/26
Environment: VS Code and vim
Compile by typing 'make'
Example of how to run the project:

Generative AI used: Claude
Prompts:

using c++ I need to make a parent process that launches child processes based on parameters

this needs to be 2 separate cpp files, one called child and one called parent

lets start with just a blank child.cpp

now make it take 1 command line argument that is the number of times a loop will run. inside the loop, each iteration should output its PID, the parent PID, and what iteration of the loop it is. it should should say "before sleeping" afterwards, then do sleep(1) and then a second output with all the same info of the first output except it will say "after sleeping"

