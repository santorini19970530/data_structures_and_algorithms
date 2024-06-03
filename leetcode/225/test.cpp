#include<iostream>
#include<vector>
#include<string>
#include "./225_trial01.cpp"

int main(){
    MyStack s;
    
    std::vector<std::string> instructions {"MyStack", "push", "push", "top", "pop", "empty"};
    std::vector<int> arguments {, 1, 2, , , };

    std::cout << "Example 1\n" << "Instructions" << std::endl;
    for(int i = 0; i < instructions.size(); i++)
        if(instructions[i] == "push")
            std::cout << instructions[i] << " " << arguments[i] << std::endl;
        else
            std::cout << instructions[i] << std::endl;

    std::cout << "Output : " << s.printStack() << std::endl;

    return 0;
}
