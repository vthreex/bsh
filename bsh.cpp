#include <iostream>
#include <unistd.h>   
#include <sys/types.h> 
#include <sys/wait.h>  
#include <sstream>
#include <vector>
std::string userinput;
std::string talkingtom; // words

// this is so confusing


int main() {
    std::cout << "bsh 1.0.0 designed for linux" << std::endl;
    while(1) {
            std::cout << "bsh> ";
            if (!std::getline(std::cin, userinput)) {           
                break;
            }
                if (userinput == "exit") {
                    break;
                }
                std::istringstream cacaomug(userinput); // stands for istream but i corellated well wahtever
                std::vector<std::string> pluraltalkingtom; // which means word(s)
                std::vector<char*> storag;
                        while (cacaomug >> talkingtom) {
    pluraltalkingtom.push_back(talkingtom);
    }

    

        for (auto& soup : pluraltalkingtom) {
            storag.push_back((char*)soup.c_str());
            
        }
        storag.push_back(nullptr);
            pid_t pid = fork();
            if (pid < 0) {
                perror("fork");
            }
            else if (pid == 0) {
                execvp(storag[0], storag.data()); // WHY DOESNT IT FUKCING WORK
                perror("execvp"); // bro fucking "" strike again
                exit(69); 
            }
        else {
            waitpid(pid, nullptr, 0);
        }
    }

}
// this shit was like 10x easier than writing byteos lmaooo
// FUCK YOU PETROLSKI
// nvm cpp is like 10x harder

// wallahi this is great formatting
