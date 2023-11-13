#include <iostream>
#include <vector>

std::vector<int> min_arr(const std::vector<int>& arr){
    std::vector<int> return_min_arr (2);
    return_min_arr[0] = arr[0];

    for (int i = 0; i < arr.size(); i++){
        if (return_min_arr[0] > arr[i]){
            return_min_arr[0] = arr[i];
            return_min_arr[1] = i;
        } else if (return_min_arr[0] == arr[i]){
            return_min_arr[0] = arr[i];
            return_min_arr[1] = i;
        }
    }
    return return_min_arr;
}

void minsort (std::vector<int>& arr){
    int min = min_arr(arr)[0];
    int min_index = min_arr(arr)[1];

    int temp;
    if (arr[0] != min){
        temp = arr[0];
        arr[0] = min;
        arr[min_index] = temp;
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
    std::vector<int> arr ={9,1,62,0,4,5};

    print_array(arr);
    minsort(arr);
    print_array(arr);
    return 0;
}