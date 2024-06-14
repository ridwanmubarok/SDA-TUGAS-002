#include <iostream>
#include <string>
#include <algorithm>

void fungsiPengurutan(std::string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::string cities[] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};
    int n = sizeof(cities) / sizeof(cities[0]);

    fungsiPengurutan(cities, n);

    std::cout << "Kota-kota yang sudah diurutkan: \n";
    for (int i = 0; i < n; ++i) {
        std::cout << cities[i] << std::endl;
    }

    return 0;
}