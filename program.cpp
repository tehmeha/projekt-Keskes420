#include<iostream>
#include<fstream>
#include<sudoku.data>
#include<sudoku_rjesen.data>
using namespace std;

int main()
{
bool Rjesenje=false;
for(int i=22; i<81; )
    {
        int  redak, stupac, Broj;
    cout << "unesite broj retka 1-9: ";
    cin >> redak;
    redak --;
    cout << "unesite broj stupca 1-9: ";
    cin >> stupac;
    stupac --;
    cout << " unesite broj: ";
    cin >> Broj;
    sudoku[redak][stupac] = Broj;
    if( sudoku[redak][stupac] == sudoku_rjesen[redak][stupac] )
    {
        i++;
    }

        else
        {
            cout << "unesli ste krivi broj: " << endl;
        }
    }
}

    return 0;
}
