#include <iostream>
#include <string>
#include <map>
#include <initializer_list>

typedef std::pair<int, std::string> t_dname;

class fizz_buzz {
    std::map<int, std::string> table;
public:
    fizz_buzz(std::initializer_list<t_dname> init_values) {
        for (const auto &item : init_values) {
            table.insert(item);
        }
    }

    void execute(int max_count) {
        for (int i = 1; i <= max_count; ++i) {
            auto matched = false;
            for (const auto &item : table) {
                if (i % item.first == 0) {
                    std::cout << item.second << ", ";
                    matched = true;
                    break;
                }
            }
            if (!matched)
                std::cout << i << ", ";
        }
        std::cout << std::endl;
    }
};

int main (int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./fizz_buzz <max count>" << std::endl;
        return EXIT_FAILURE;
    }
    fizz_buzz fb = {{3, "Fizz"},
                    {5, "Buzz"},
                    {15, "FizzBuzz"}};
    int max_count = std::stoi(argv[1]);
    fb.execute(max_count);

    return EXIT_SUCCESS;
}

