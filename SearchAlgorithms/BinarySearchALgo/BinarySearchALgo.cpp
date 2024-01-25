#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid; // Key found
        }
        else if (arr[mid] < key) {
            left = mid + 1; // Adjust the search range to the right half
        }
        else {
            right = mid - 1; // Adjust the search range to the left half
        }
    }

    return -1; // Key not found
}

int main() {
    cout << "Binary Search By Sajjad Tariq\n";

    int size, key;

    std::cout << "Enter size of sorted array: ";
    std::cin >> size;



    int* array = new int[size];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    std::cout << "Enter elements of sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Enter key: ";
    std::cin >> key;

    int result = binarySearch(array, size, key);

    if (result != -1) {
        std::cout << "Key found at index: " << result << std::endl;
    }
    else {
        std::cout << "Key not found in the array." << std::endl;
    }

    return 0;
}