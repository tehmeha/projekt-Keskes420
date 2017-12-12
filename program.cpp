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
        cout << endl;
        cout << "   ";
        for (int n =0; n<9; n++)
        {
            cout <<n<<" ";
                if(n== 2 || n==5||n==8)
                {
                    cout << " ";
                }
        }
        cout << endl;
        for (int n =1; n<24;n++)
        {
            cout << "-";
        }
        cout << endl;
        for(int i=0;i<9;i++)
        {
            if(i== 3 || i==6||i==9)
                {
                    cout << endl;
                }
                cout << i << "| ";
           for(int j=0;j<9;j++)
            {
            if(j== 3 || j==6||j==9)
                {
                    cout << "| ";
                }
            dat >> a >> c;
            cout << a << " ";
            sudoku[i][j] = a;
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
        for(int i=22; i<=81; )
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
                sudoku[redak][stupac] = Broj;
            }

        else
        {
            cout << "unesli ste krivi broj, popravite ga!!!!!!" << endl;

        }
        cout << "   ";
        for (int n =0; n<9; n++)
        {
            cout <<n<<" ";
                if(n== 2 || n==5||n==8)
                {
                    cout << " ";
                }
        }
        cout << endl;
        for (int n =1; n<24;n++)
        {
            cout << "-";
        }
        cout << endl;
        for(int i=0;i<9;i++)
        {
            if(i== 3 || i==6||i==9)
                {
                    cout << endl;
                }
                cout << i << "| ";
           for(int j=0;j<9;j++)
            {
            if(j== 3 || j==6||j==9)
                {
                    cout << "| ";
                }

            cout <<sudoku[i][j]<< " ";
            }
            cout <<endl;
        }
    }
    cout << "Uspjesno ste rjesili neki sudoku SVAKA CAST";
}
