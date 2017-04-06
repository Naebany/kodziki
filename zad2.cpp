#include <iostream>

using namespace std;

int main()
{
    int N,G;
    cout << "Podaj rozmiar tablicy: " ;
    cin >> N;
    int tab[N];
    for(int i=0; i<N; i++)
    {
        cout << "Podaj " << i+1 << " element tablicy: ";
        cin >> tab[i];
    }
    cout << "Elementy tablicy to: ";
    for(int i=0; i<N; i++)
    {
        cout << tab[i] << " ";
    }
    cout << "Podaj G: ";
    cin >> G;
    float srednia;
    int suma=0;
    for(int i=0; i<N; i++)
    {
        suma=suma+tab[i];
    }
    srednia= suma/N;
    cout << "suma to: " << suma << endl;
    cout << "srednia to: " << srednia<< endl;
    for (int i=0; i<N ; i++)
    {
        for (int j=i+1; j<N; j++)
        {
            if(((tab[i]+tab[j])/2.0)-srednia<G && srednia-((tab[i]+tab[j])/2.0)<G)
                cout<<"("<<tab[i]<<", "<<tab[j]<<")";
        }
    }

    return 0;
}
