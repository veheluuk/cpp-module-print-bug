module;
#include <print>
export module module_that_prints;

export class printer {
public:

    void print(int i)
    {
        std::print("{}\n", i);
    }
};
