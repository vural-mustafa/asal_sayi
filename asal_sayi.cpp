#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    std::cout << "Bir sayi girin: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " asal bir sayidir." << std::endl;
    } else {
        std::cout << num << " asal bir sayi degildir." << std::endl;
    }

    return 0;
}

