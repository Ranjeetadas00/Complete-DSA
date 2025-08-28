# include <iostream>
using namespace std;
int main(){

    int x = 10; //range is -10^9 to 10^9
    long y = 123456789; //range is -10^12 to 10^12
    long long z = 123456123456123456 ;//range is -10^18 to 10^18
// cout<<z;

// float and double
// string and getline
string s ;
cin>>s;
cout<<s;  //prints only the first word
getline(cin,s);//accepts the entire input line
cout << s; //this cout prints entire input line
 
char ch;
cin>>ch;
cout <<ch;

// DataTypes
// int , long, long long, float, double, string , char

    return 0;
}