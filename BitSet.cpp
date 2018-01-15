/*�r�b�g�x�N�g���ɂ��W���N���XBitSet�i�\�[�X���j*/
#include <string>
#include <sstream>
#include <iostream>
#include "./Project1/Project1/BitSet.h"

using namespace std;

//������\��"{a, b, c}"��ԋp�i�v�f���R���}�ŋ�؂���{}�͂ށj
string BitSet::to_string() const
{
  ostringstream s;
  int set[LONG_BIT];    //�܂܂��v�f
  int count = 0;        //�v�f��
  for (int i = 0; i < LONG_BIT; i++)
    if (bits & set_of(i)) set[count++] = i;
  s << "{";
  if (count) {
    for (int i = 0; i < count - 1; i++)
      s << set[i] << ", ";
    s << set[count - 1];
  }
  s << "}";

  return s.str();
}

//�r�b�g�x�N�g���̕�����\��"010...10"��ԋp
string BitSet::bit_string() const
{
  char bp[LONG_BIT + 1];    //�܂܂��v�f
  for (int i = LONG_BIT - 1; i >= 0; i--)
    bp[LONG_BIT - i - 1] = (set_of(i) & bits) ? '1' : '0';
  bp[LONG_BIT] = '\0';
  return string(bp);
}

//�}���q
ostream& operator<<(ostream& os, const BitSet& x)
{
  return os << x.to_string();
}