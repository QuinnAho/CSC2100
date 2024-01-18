/*
Quinn Aho

Lab 1 - Triangle  App

CSC 2100
*/
#include <iostream>

using namespace std;

int main()
{

    int triSize;
    cout << "Triangle App!" << endl;
    cout << "---------------------" << endl;

    cout << "Enter the size of the triangles [3,4,5,6,7]: ";
    cin >> triSize;

    //make a switch statement to determine which triangle to print
    switch (triSize)
    {
    case 3:
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < 4; i++)
        {
            for(int j = 3; j > i; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
      

        break;
    case 4:
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < 5; i++)
        {
            for(int j = 4; j > i; j--)
            {
                cout << "*";
        
            }
            cout << endl;
        }
        break;
    case 5:
        for(int i = 0; i < 6; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < 6; i++)
        {
            for(int j = 5; j > i; j--)
            {
                cout << "*";
        
            }
            cout << endl;
        }
        break;
    case 6:
        for(int i = 0; i < 7; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < 7; i++)
        {
            for(int j = 6; j > i; j--)
            {
                cout << "*";
        
            }
            cout << endl;
        }
        break;
    case 7:
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < 8; i++)
        {
            for(int j = 7; j > i; j--)
            {
                cout << "*";
        
            }
            cout << endl;
        }
        break;
    default:
        cout << "Invalid input. Try again." << endl;
        break;
    }
    return 0;
}