#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Số nguyên tố phải lớn hơn 1
    }

    // Kiểm tra từ 2 đến sqrt(n)
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; // Nếu chia hết cho bất kỳ số nào, không phải là số nguyên tố
        }
    }

    return true; // Nếu không chia hết cho số nào, là số nguyên tố
}

int main() {
    int num;
    cout << "Nhap mot so nguyen duong: ";
    cin >> num;

    // Kiểm tra số nguyên dương nhập vào có phải là số nguyên tố không
    if (isPrime(num)) {
        cout << num << " La so nguyen to." << endl;
    }
    else {
        cout << num << " Khong phai so nguyen to." << endl;
    }

    return 0;
}
