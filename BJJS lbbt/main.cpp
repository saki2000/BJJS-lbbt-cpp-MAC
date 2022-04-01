//
//  main.cpp
//  BJJS lbbt
//
//  Created by Michal Sakowski on 01/04/2022.
//

#include <iostream>
#include <vector>
#include <stdint.h>

struct TaxBrackets
{
    int32_t min;
    int32_t max;
    float rate;
};


class TaxCalculator
{
private:
    int houseValue = 0;
    const std::vector<TaxBrackets>bracket = {{0,175000,0.0}, {175000,250000,0.02}, {250000,325000,0.05}, {325000,750000,0.1}, {750000, std::numeric_limits<int>::max(), 0.12}};
    
public:
    TaxCalculator(){};
    TaxCalculator(int houseValue_)
    {
        this->houseValue = houseValue_;
    }
    
    int calculate()
    {
        int32_t lbbt = 0;
        
        
        
        
        
        return lbbt;
    }
};

int main(int argc, const char * argv[]) {

    TaxCalculator tax1(300000);
    
    tax1.calculate();
    
    
    return 0;
}
