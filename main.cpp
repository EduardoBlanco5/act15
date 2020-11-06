#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> enteros;
    string op;

    while (true)
    {
        cout<< "1.- Agregar al final " << endl;
        cout<< "2.- Mostrar " << endl;
        cout<< "3.- Inicializar " << endl;
        cout<< "4.- Frente " << endl;
        cout<< "5.- Ultimo " << endl;
        cout<< "0.- salir  " << endl;

        getline(cin, op);

        if(op== "1")
        {
            int entero;
            cout<< "Entero: ";
            cin >> entero; cin.ignore();

            enteros.push_back(entero);
        }
        else if(op=="2")
        {
            for (size_t i = 0; i < enteros.size(); i++)
            {
                cout << enteros[i] <<", ";
            }
            cout <<endl;
        }
        else if (op == "3")
        {
            size_t n;
            int entero;

            cout << "tam: ";
            cin>> n;
            cout<< "entero: ";
            cin>> entero; cin.ignore();

            enteros = vector<int>(n, entero);
        }
        else if (op == "4")
        {
            if(enteros.empty())
            {
                cout << "Vector vacio..."<< endl;

            }
            else
            {
                cout << enteros.front() << endl;

            }
            
        }
        else if (op == "5")
        {
            if(enteros.empty())
            {
                cout << "Vector vacio..."<< endl;

            }
            else
            {
                cout << enteros.back() << endl;
                
            }
        }
        
        else if(op=="0")
        {
            break;
        }
    }
    
    system("pause");
}