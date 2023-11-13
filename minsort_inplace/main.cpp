#include <iostream>
#include <vector>

void print_array (const std::vector<int>& arr){
    for(const int numb: arr){
        std::cout << numb << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> arr ={9,1,2,0,4,5};

    print_array(arr);

    return 0;
}