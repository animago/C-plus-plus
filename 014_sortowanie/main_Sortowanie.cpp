#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile=75000;
clock_t start,stop;
double czas;

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void quick_sort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quick_sort(tablica,lewy, j);
    if(i<prawy) quick_sort(tablica, i, prawy);
}


void insert_sort(int *tab, int n)
{

    for (int x = 1; x < n; x++)
    {
        //Wybieramy element który chcemy porównywaæ
        int selectedElement = tab[x];
        int y;

        //Rozpoczynamy przesuwanie elementów szukaj¹c miesjca docelowego
        //dla wybranego przez nas elementu
        for (y = x - 1; (selectedElement < tab[y]) && (y >= 0); y--)
        {
            tab[y + 1] = tab[y];
        }

        //	cout << "\nKrok " << x - 1 << ": Przenoszenie elementu " << selectedElement;
        //	cout << " z pozycji " << x << " na pozycje " << y+1 << endl;
        tab[y + 1] = selectedElement;
        //	printTab(tab, n);
    }
}

int main()
{
    cout << "Porownanie czasow sortowania v.1";
    cout<<endl;
    cout<<endl;
    cout<<"Ile losowych liczb w tablicy: "<< ile;
//    cin>>ile;

    //dynamiczna alokacja tablicy
    int *tablica;
    tablica=new int [ile];

    int *tablica2;
    tablica2=new int [ile];

    int *tablica3;
    tablica3=new int [ile];
    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
    for(int i=0; i<ile; i++)
    {
        tablica[i] = rand()%100000+1;
    }

    //przepisanie tablicy do tablicy2
    for(int i=0; i<ile; i++)
    {
        tablica2[i]=tablica[i];
        tablica3[i]=tablica[i];
    }

    cout<<endl;
    cout<<endl;
    cout<<"Przed posortowaniem: ";
    for(int i=0; i<10; i++)
    {
        cout<<tablica[i]<<" ";
    }
    cout<<" ...";
    cout<<endl;
    cout<<endl;

    cout<<"Babelkowo. Prosze czekac! ";
    start = clock();
    sortowanie_babelkowe(tablica,ile);
    stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<"Czas sortowania babelkowego: "<<czas<<" s"<<endl;

    cout<<"Po sortowaniu: ";
    for(int i=0; i<10; i++)
    {
        cout<<tablica[i]<<" ";
    }
    cout<<" ...";
    cout<<endl;
    cout<<endl;
    cout<<"Quicksort. Prosze czekac! ";
    start = clock();
    quick_sort(tablica2, 0, ile-1);
    stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<"Czas sortowania quicksort: "<<czas<<" s"<<endl;
    cout<<"Po sortowaniu: ";
    for(int i=0; i<10; i++)
    {
        cout<<tablica2[i]<<" ";
    }
    cout<<" ...";
    cout<<endl;

    cout<<endl;
    cout<<"Insert Sort. Prosze czekac! ";
    start = clock();
    insert_sort(tablica3, ile-1);
    stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<"Czas sortowania insert sort: "<<czas<<" s"<<endl;
    cout<<"Po sortowaniu: ";
    for(int i=0; i<10; i++)
    {
        cout<<tablica3[i]<<" ";
    }
    cout<<" ...";
    cout<<endl;




    delete [] tablica;
    delete [] tablica2;
    delete [] tablica3;

    cout<<endl;
    return 0;
}
