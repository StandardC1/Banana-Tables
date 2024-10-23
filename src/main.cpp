#include <iostream>

int main(int argc, char** argv) {

    if (argc < 2) {
        std::cerr << "[USAGE] " << argv[0] << " --flags filename.ltb" << std::endl;
        return 1;
    }

    return 0;
}