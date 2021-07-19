#include <iostream>
#include <iomanip>
using namespace std;

// https://www.hackerrank.com/challenges/prettyprint/problem
int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    // Output first input as a decimal truncated hex representation
    // Output second input as a string of 15 total characters + (_) on the left
    // as a filler and the number stripped to 2 decimal points on the right with
    // it's sign on the right
    // Outpt third input as a number with 9 decimal points expressed using scientific notation
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        long int x = (long int) A;
        int beet_size;
        string beet = to_string(B);
        beet = beet.substr(0, beet.find("."));
        beet_size = beet.size()+4;
        string filler = "";
        string sign;
        for (int i = 0; i < 15-beet_size; i++)
        {
            filler += "_";
        }
        if(B>=0){
            sign = "+";
        }else
        {
            sign = "-";
        }
        

        printf("%#lx\n", x); // the l stands for the long int extension
        printf("%s%s%.2f\n", filler.c_str(), sign.c_str(), B);
        cout.precision(9);
        cout << scientific << C << endl;
    }
    return 0;
}