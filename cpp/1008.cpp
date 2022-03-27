#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    // 유효숫자 설정
    std::cout.precision(9);
    std::cout << std::fixed << (double)a/b << std::endl;

    return 0;

}

/* 추가 정보 */
/*

cout << (double)a/b << endl;
기본값은 유효숫자 6

cout.precision(9)
출력 유효숫자를 9 로 설정

cout << fixed;
출력값을 소수점 고정식으로 표현 ex) 0.00023

cout << scientific;
출력값을 지수식으로 표현함 ex) 2.3e-04

cout.unsetf(ios::scientific)
이미 적용되어 있었던 scientific 표현 방식 해제

cout.setf(ios::fixed)
fixed 표현 방식으로 설정

*/