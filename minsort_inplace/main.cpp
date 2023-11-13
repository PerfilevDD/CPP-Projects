#include <iostream>
#include <vector>

int min_arr(const std::vector<int>& arr){
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if (min > arr[i]){
            min = arr[i];
        } else if (min == arr[i]){
            min = arr[i];
        }
    }
    return min;
}

void minsort (std::vector<int>& arr){
    int min = min_arr(arr);
    int temp;
    if (arr[0] != min){
        temp = arr[0];
        arr[0] = min;
    }
}

void print_array (const std::vector<int>& arr){
    // Print an array
    for(const int numb: arr){
        std::cout << numb << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> arr ={9,1,2,0,4,5};

    print_array(arr);
    minsort(arr);
    print_array(arr);
    return 0;
}