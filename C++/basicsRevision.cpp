#include<iostream>
using namespace std;
int main(){
//VARIABLES
// ----------------
    // 1: INT - 4 byte
    //    int a;  // variable declare
    //    a = 10; // initialization
    //    cout << a;

    // initialize/declare more variable in one data type;
    int a = 10, b = 20, g;
    cout << a + b << endl;

    // 2: CHAR - 1 byte
    char c = 'a';
    cout << c << endl;

    // 3: FLOAT - 4 byte
    float f = 2.31;
    cout << f<<endl;

    // 4: DOUBLE - 8 byte
    double d = 3.2342;
    cout << d << endl;

    // 5: BOOLEAN - 1 byte
    bool bl = true;
    cout << bl<<endl;
   

    // ===================================

    // Printing 1 to N even numbers
    // ---------------------------------
        int n;
    cout << "Enter a number: ";
    cin >> n;

    // METHOD 1:
    for (int count = 2; count <= n; count = count + 2)
    {
        cout << count << " ";
    }

    cout << endl;

    // METHOD 2:
    for (int count = 1; count <= n; count = count + 1)
    {
        if (count % 2 == 0)
            cout << count << " ";
    }

// ------------------------------------------------
// squares of number
// -------------------------------
//   int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int count = 1; count <= n; count = count + 1)
    {
        cout << count << "^2 = " << count * count << endl;
    }

    // ============================================
    // Typecasting
     int aa = 66;
    char ch = 0;
    ch = aa;        //B -> as ch is char At 66 ->B
    cout<<ch;


     return 0;
}