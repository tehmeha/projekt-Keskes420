#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
     bool Rjesenje=false;

        ifstream dat;
    dat.open("sudoku.data");
    int a;
    int sudoku[9][9];
    char c;
    for(int i=0;i<9;i++)
        {
        for(int j=0;j<9;j++)
            {
                for (int n = 1; n < 9; n++)
                {
                cout << "-" ;
                }
                cout << endl;
                for (int n = 1; n < 9; n++)
                    {
                    if(n < 10 ) cout << n << " | ";
                    else cout << n << "| ";
                    dat >> a >> c;
                    cout << a << " ";
                    sudoku[i][j] = a;
                    }
                }
                cout <<endl;
            }
    ifstream dat1;
    dat1.open("sudoku_rjesen.data");
    int b;
    int sudoku_rjesen[9][9];
    char d;
    for(int i=0;i<9;i++)
        {
        for(int j=0;j<9;j++)
            {
            dat1 >> b >> d;
            sudoku_rjesen[i][j] = b;
            }
        }
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
            cout << "unesli ste krivi broj, popravite ga!!!!!!" << endl;

        }
        for(int l=0;l<9;l++)
        {
        for(int k=0;k<9;k++)
            {
            cout << sudoku[l][k]<< " ";
            }
        cout << endl;
        }
    }
    cout << "Uspjesno ste rjesili neki sudoku SVAKA CAST";
}
