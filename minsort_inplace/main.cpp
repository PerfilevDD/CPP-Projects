#include <iostream>
#include <vector>

std::vector<int> min_arr(const std::vector<int>& arr, const int& start){
    std::vector<int> return_min_arr (2);
    return_min_arr[0] = arr[start];

    for (int i = start; i < arr.size(); i++){
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
    int temp;
    std::vector<int> mins (2);

    for (int i = 0; i < arr.size(); i++){
        mins = min_arr(arr, i);
        if (arr[i] != mins[0]){
            temp = arr[i];
            arr[i] = mins[0];
            arr[mins[1]] = temp;
        }
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