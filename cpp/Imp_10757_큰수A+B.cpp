#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string num1, num2;
    string ans;

    int result;
    bool carry = false;

    cin >> num1 >> num2;

    if(num2.length() < num1.length())
    {
        string tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int i = 0; i < num1.length(); i++)
    {
        result = ((int)num1[i] - '0') + ((int)num2[i] - '0');

        // 저번 연산에서 올림수가 있으면 더하기
        if(carry && i > 0)
        {
            result++;
            carry = false;
        }

        // 계산결과가 10보다 크면
        if(result >= 10)
        {
            carry = true;
        }
        ans.push_back((char)(result % 10 + '0'));
    }
    
    for(int i = num1.length(); i < num2.length(); i++)
    {

        result = (int)num2[i] - '0';
        if(carry)
        {
            result++;
            carry = false;
        }

        // 계산결과가 10보다 크면
        if(result >= 10)
        {
            carry = true;
        }
        
        ans.push_back((char)(result % 10 + '0'));
    }
    if(result >= 10) ans.push_back((char)(result / 10 + '0'));
    reverse(ans.begin(), ans.end());
    cout << ans;
    
    return 0;
}