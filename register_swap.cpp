#include <iostream>
const int shift=32; //сдвижка между кодами символов нижнего и верхнего региста в ASCII таблице

char toUpper(char c)
{

	return c-shift;
}

char toLower(char c)
{

	return c+shift;
}

int main()
{
    using namespace std;
	
	char k;
    cout<< "Enter the character"<<endl;
	cin>>k;
	if((k>=97)&&(k<=122)) cout<<toUpper(k)<<endl; //так как в условии не было прописано как одновременно проверить работу обеих функций, то опять влепил проверку по результату ввода, чтобы выбрать нужную
	else if ((k>=65)&&(k<=90)) cout<<toLower(k)<<endl;
	else cout<<"wrong input"<<endl;
	
	int j;
	cin>>j;
    return 0;
}