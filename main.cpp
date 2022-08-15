#include <iostream>
#include "vector"

float total_sum(std::vector<float> prices,std::vector<int> items){
    float sum=0;
    for(int i=0;i<items.size();++i){
        if (items[i]<prices.size()&&items[i]>=0){
            sum+=prices[items[i]];
        }
    }
    return sum;
}

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};
    std::cout << "TOTAL: " <<total_sum(prices,items)<< std::endl;
    return 0;
}
