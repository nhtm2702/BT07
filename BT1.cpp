#include <iostream>

using namespace std;

void DXX(int *n1, int *n2, int t1, int t2)
{
    if ((t1>=t2))
    {
        cout << "Nguoi thu nhat: "; cin >> n1[0];
        cout << "Nguoi thu hai: "; cin >> n2[0];
        cout << "Nguoi thu nhat: "; cin >> n1[1];
        cout << "Nguoi thu hai: "; cin >> n2[1];
    }
    else
    {
        cout << "Nguoi thu hai: "; cin >> n2[0];
        cout << "Nguoi thu nhat: "; cin >> n1[0];
        cout << "Nguoi thu hai: "; cin >> n2[1];
        cout << "Nguoi thu nhat: "; cin >> n1[1];
    }
}
main()
{
    int *n1= new int [2];
    int *n2= new int [2];
    int t1 = 0, t2 = 0;
    DXX(n1,n2,t1,t2);
    t1=t1+n1[0]+n1[1];
    t2=t2+n2[0]+n2[1];
    while ((t1<100) && (t2<100))
    {
        DXX(n1,n2,t1,t2);
        t1=t1+n1[0]+n1[1];
        t2=t2+n2[0]+n2[1];
    }
    if (t1 == 100) cout << "Nguoi thu nhat thang";
    else cout << "Nguoi thu hai thang";
    return 0;
}
