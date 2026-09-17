#include <iostream>
#include <unistd.h>   
#include <sys/types.h> 
#include <sys/wait.h>  
#define penis fork
#include <sstream>
#include <vector>
std::string userinput;
std::string penis2; 

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
                std::istringstream puh(userinput);
                std::vector<std::string> cum; 
                std::vector<char*> penis3;
                        while (puh >> penis2) {
    cum.push_back(penis2);
    }

    

        for (auto& soup : cum) {
            penis3.push_back((char*)soup.c_str());
            
        } 
        penis3.push_back(nullptr);
            pid_t pid = penis();
            char* arguments[] =  { (char*)userinput.c_str(), NULL }; // penis
            if (pid < 0) {
                perror("penis");
            }
            else if (pid == 0) {
                execvp(penis3[0], penis3.data()); // WHY DOESNT IT FUKCING WORK
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
