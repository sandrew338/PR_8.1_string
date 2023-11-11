// ���� ������� �����, ���� ������ ����������� ������� s[0], ..., s[n], ...
// 1. ��������, �� � � ��� ����������� ��� �������� s[i�1] , s[i+1]
// �� s[i�1] � �� ���� ���� ('+'), � s[i+1] � ���� ���� ('-'),
// �� ��������� �� �������.
// 2. ������� ����� ����� ������� s[i�1] , s[i] , s[i+1] � �����, ��
// s[i�1] � �� ���� ���� ('+'), � s[i+1] � ���� ���� ('-')
// �������� ������ "****".
#include <iostream>
#include <string>
using namespace std;
int QuantityOfSymb(const string s, char symb)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(symb, pos)) != -1)
	{
		if (s[pos] == symb)
			k++;
		pos++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	int i = 0;
	while (i < s.length() - 1)
	{
		if (s[i] == '+' && s[i + 1] == '+' ||
			s[i] == '-' && s[i + 1] == '-' ||
			s[i] == '=' && s[i + 1] == '=')
		{
			s.replace(pos, 2, "***");
			pos += 2;
			i++;
		}
		else
		{
			pos++;
		}
		i++;
	}
		
	
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
		getline(cin, str);
	int quant_plus = QuantityOfSymb(str, '+');
	int quant_minus = QuantityOfSymb(str, '-');
	int quant_equalSymb = QuantityOfSymb(str, '=');
	cout << "String contained:" << endl << quant_plus << " - '+'" << endl
		<< quant_minus << " - '-'" << endl << quant_equalSymb << " - '='" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;

}