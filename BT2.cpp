#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void Rua(int& R, int rua)
{
    if ( rua == 1)
        {
            cout << "Rua, Tien Dai, 50%, Tien 3" << endl;
            R+=3;
            cout << "Vi tri Rua: " << R << endl;
        }
        else if ( rua == 2)
        {
            cout << "Rua, Tien Ngan, 30%, Tien 1" << endl;
            R+=1;
            cout << "Vi tri Rua: " << R << endl;
        }
        else
        {
            cout << "Rua, Truot, 20%, Truot 6" << endl;
            R-=6;
            cout << "Vi tri Rua: " << R << endl;
        }
}

void Tho(int& T, int tho)
{
    if (tho == 1)
        {
            cout << "Tho, Ngu, 20%, Dung Im" << endl;
            cout << "Vi tri Tho: " << T << endl;
        }
        else if (tho == 2)
        {
            cout << "Tho, Tien dai, 20%" << endl;
            T += 9;
            cout << "Vi tri Tho: " << T << endl;
        }
        else if (tho == 3)
        {
            cout << "Tho, Truot dai, 10%" << endl;
            T -= 12;
            cout << "Vi tri Tho: " << T << endl;
        }
        else if (tho == 4)
        {
            cout << "Tho, Tien ngan, 30%" << endl;
            T += 1;
            cout << "Vi tri Tho: " << T << endl;
        }
        else
        {
            cout << "Tho, Truot Ngan, 20%" << endl;
            T -= 2;
            cout << "Vi tri Tho: " << T << endl;
        }
}
main()
{
    int rua, tho;
    int R=0, T=0, i=0;
    while ((R<70) && (T<70))
    {
        srand(time(0));
        rua = rand() % 3 + 1;
        Rua(R, rua);
        if (R<0) R=0;
        srand(time(0));
        tho = rand() % 5 + 1;
        Tho(T, tho);
        if (T<0) T=0;
    }
    cout << "Vi tri Rua: " << R << endl;
    cout << "Vi tri Tho: " << T << endl;
    return 0;
}
