#pragma once
class Counter
{
private:
    int FirstNumber;
public:
    Counter() : FirstNumber(1) {};
    Counter(int Input_From_Main) : FirstNumber(Input_From_Main) {};
    void IncFirstNumber();
    void DecFirstNumber();
    void ShowFirstNumber();
};