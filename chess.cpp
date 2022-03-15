#include <iostream>
using namespace std;

void on_the_board(char a, int b){ // ф-ия определяет, есть ли такая позиция коня на шахматной доске и, в соответсвии с этим, выводим поданное на вход значение
  if (a >= 'a' && a <= 'h' && b >= 1 & b <= 8)
    cout << a << " " << b << endl;
}

void two_up_one_left(char a, int b) { // ф-ия определяет, может ли конь переместиться на 2 вправо и на  1 вверх
  char a1 = a + 2;
  int b1 = b + 1;
  on_the_board(a1, b1);
 }

void two_up_one_right(char a, int b) { // ф-ия определяет, может ли конь переместиться на 2 вправо и на 1 вниз
  char a1 = a + 2;
  int b1 = b - 1;
  on_the_board(a1, b1);
}

void two_down_one_left(char a, int b) { // ф-ия определяет, может ли конь переместиться на 2 влево и на 1 вверх
  char a1 = a - 2;
  int b1 = b + 1;
  on_the_board(a1, b1);
}

void two_down_one_right(char a, int b) { // ф-ия определяет, может ли конь переместиться на 2 влево и на 1 вниз
  char a1 = a - 2;
  int b1 = b - 1;
  on_the_board(a1, b1);
}

void one_up_two_left(char a, int b) { // ф-ия определяет, может ли конь переместиться на 1 вправо и на 2 вверх
  char a1 = a + 1;
  int b1 = b + 2;
  on_the_board(a1, b1);
}

void one_up_two_right(char a, int b) { // ф-ия определяет, может ли конь переместиться на 1 вправо и на 2 вниз
  char a1 = a + 1;
  int b1 = b - 2;
  on_the_board(a1, b1);
}

void one_down_two_left(char a, int b) { // ф-ия определяет, может ли конь переместиться на 1 влево и на 2 вверх
  char a1 = a - 1;
  int b1 = b + 2;
  on_the_board(a1, b1);
}

void one_down_two_right(char a, int b) { // ф-ия определяет, может ли конь переместиться на 1 влево и на 2 вниз
  char a1 = a - 1;
  int b1 = b - 2;
  on_the_board(a1, b1);
}

int main() {
  cout << "Введите позицию коня: ";
  char column;
  int row;
  cin >> column >> row;
  two_up_one_left(column,row);
  two_up_one_right(column,row);
  two_down_one_left(column,row);
  two_down_one_right(column,row);
  one_up_two_left(column,row);
  one_up_two_right(column,row);
  one_down_two_left(column,row);
  one_down_two_right(column,row);
  return 0;  
}