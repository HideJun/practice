
//符号無し整数の論理積・論理和・排他論理和・１の補数を表示
#include <iostream>

using namespace std;
//整数x中の"１"であるビット数を求める
int count_bits(unsigned x)
{
  int bits = 0;
  while(x){
    if (x & 1U) bits++;
    x >>= 1;
  }
  return bits;
}

//int型/unsinged型のビット数を求める
int int_bits()
{
  return count_bits(~0U);
}

//unsigned 型のビット構成を表示
void print_bits(unsigned x)
{
  for (int i = int_bits() - 1; i >= 0; i--){
      char ch = (x>>i) & 1U ? '1':'0';
      cout << ch;
  }
}

int main(void)
{
  unsigned a, b;

  cout << " 非負の整数を二つ入力せよ。\n";
  cout << " a："; cin >> a;
  cout << " b："; cin >> b;

  cout <<" a     = "; print_bits(a);   cout << '\n';
  cout <<" b     = "; print_bits(b);   cout << '\n';
  cout <<" a & b = "; print_bits(a&b); cout << '\n';
  cout <<" a | b = "; print_bits(a|b); cout << '\n';
  cout <<" a ^ b = "; print_bits(a^b); cout << '\n';
  cout <<" -a    = "; print_bits(-a);  cout << '\n';
  cout <<" -b    = "; print_bits(-b);  cout << '\n';
}
