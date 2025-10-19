/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
	int tahminEdilecekSayi;
	cin>>tahminEdilecekSayi;
	int rastgeleSayi=1 + (rand() % 100);
	while(rastgeleSayi!=tahminEdilecekSayi) {
	    cout<<"programın tahmin ettiği sayı: "<<rastgeleSayi<<endl;
		rastgeleSayi=1 + (rand() % 100);
	}
	cout<<rastgeleSayi;
//2. commitim
    return 0;
}