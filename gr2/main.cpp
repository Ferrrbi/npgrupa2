#include <iostream>

using namespace std;
int x;
int y;

int main()
{
int wybor;
extern void dodawanie();


    cout << "Podaj liczbe pierwsza: ";
    cin >> x;
    cout << "Podaj liczbe druga: ";
    cin >> y;
    cout<<"Podale liczbe "<< x << " oraz " << y << endl;


    cout<<"wybierz operacje"<<endl;
    cout<<"Wcisnij 1 aby dodać"<<endl;
    cout<<"Wcisnij 2 aby odjac"<<endl;
    cout<<"Wcisnij 3 aby pomnozyc"<<endl;
    cout<<"Wcisnij 4 aby podzielic"<<endl;
    cin>>wybor;
    switch(wybor)
    {
        case 1:dodawanie();



    }

        return 0;
}
