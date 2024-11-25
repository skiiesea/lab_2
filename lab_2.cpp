#include <iostream>

using std::cout, std::cin, std::endl;

int main(){
    int k;
    cout << "Enter a three digit number: "; // Позволяем пользователю ввести трёхзначное число.
    cin >> k; // Считываем это число.


    if(k < 100 || k > 999){
        cout << "Error, enter a three digit number" << endl;
        return 1;
    }

    int sum = 0, prod = 1; // Заводим переменные в которых будем хранить информацию по: Самим числам, сумме, произведению. Int для того, чтобы число было целым
    
    int a = k % 10; // Находим первое число трёхзначного числа.
    int b = (k / 10) % 10; // Находим второе число.
    int c = k / 100; // Находим третье число.

    if (a < b && b < c) { 
        cout << "Numbers " << k << " form an ordered sequence in ascending order." << endl;
    } else if (a > b && b > c) {
        cout << "Numbers " << k << " form an ordered descending sequence." << endl;
    } else {
        cout << "Numbers " << k << " don't form an ordered sequence." << endl;
    }

    return 0;
    
}


 