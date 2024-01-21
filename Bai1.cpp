#include <iostream>
unsigned long long tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Vui long nhap so nguyen duong.\n";
    } else {
        unsigned long long ketQua = tinhGiaiThua(n);
        std::cout << "Giai thua cua " << n << " la: " << ketQua << "\n";
    }
    std::cout<<"hello world";
    return 0;

}
