#include <iostream>
using namespace std;

int main()
{//begin
    float nJejari, nLuas; 
    //numeric nJejari, nLuas
    cout << "Masukan Jejari = "; 
    //display 'Masukan Jejari =' 
    cin >> nJejari; 
    // accept nJejari
    nLuas = 3.14 * nJejari * nJejari;
        //compute nLuas = 3.14 * r * r
        cout << "Luasnya =" << nLuas << endl; // display 'Luasnya =' +nLuas
}//end
