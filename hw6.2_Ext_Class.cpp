#include "hw6.2_Header.h"
#include <iostream>

    void Counter::IncFirstNumber()
    {
        FirstNumber = FirstNumber + 1;
    }
    void Counter::DecFirstNumber()
    {
        FirstNumber = FirstNumber - 1;
    }
    void Counter::ShowFirstNumber()
    {
        std::cout << FirstNumber << std::endl;
    }
