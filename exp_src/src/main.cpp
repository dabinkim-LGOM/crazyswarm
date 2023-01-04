#include <Wrapper.h>

int main(int argc, char** argv){
    RemoteControl::Wrapper wrapper(argv[1]);
    std::cout << "Hello" << std::endl;
}