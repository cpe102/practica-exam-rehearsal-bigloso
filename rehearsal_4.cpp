#include <iostream>
#include <string>
using namespace std ;
    conpress(string i){
	int L1 = i.size();
    int x = 0 ;
    int num =4 ;
	string h ="" ;
	if(num%L1 == 0){
	while(x<L1){
		h += i[x] ;
		x++ ;
	}
	 return h ;
	}
}
	
	

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    string j = conpress("CPECMU");
    string k = conpress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n"<< j<<"\n"<<k<<"\n" ;

}
