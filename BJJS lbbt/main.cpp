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
    int32_t houseValue = 0;
    const std::vector<TaxBrackets>bracket = {{0,145000,0.0}, {145000,250000,0.02}, {250000,325000,0.05}, {325000,750000,0.1}, {750000, std::numeric_limits<int>::max(), 0.12}};
    
public:
    TaxCalculator(){};
    TaxCalculator(int32_t houseValue_)
    {
        this->houseValue = houseValue_;
    }
    
    int32_t calculate()
    {
        float lbbt = 0;
        int32_t taxAtThisBracket = 0;
        
        for (std::size_t i = 0 ; i<bracket.size(); i++ )
        {
            if(houseValue > bracket[i].min)
            {
                if( (bracket[i].max - bracket[i].min) < (houseValue - bracket[i].min) )
                    taxAtThisBracket = (bracket[i].max - bracket[i].min);
                else
                    taxAtThisBracket = houseValue - bracket[i].min;
                
                lbbt += taxAtThisBracket * bracket[i].rate;
            }
            
        }
        
        return static_cast<int>(lbbt);
    }
    
};

int main(int argc, const char * argv[]) {

    TaxCalculator tax1(300000);
    std::cout<< tax1.calculate() << std::endl;
    
    
    return 0;
}
