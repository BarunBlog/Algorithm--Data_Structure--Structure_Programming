#include <bits/stdc++.h>
#define pb push_back
using namespace std;
class disjointSet {
map <char, char> parent;
public:
    void Make(char ch)
    {
         parent[ch] = ch;
    }
    char FindRep(char item)
    {
        if(parent[item] == item)
            return item;
        else
        {
            parent[item]=FindRep(parent[item]);
            return FindRep(parent[item]);
        }
    }
    void Union(char e1, char e2)
    {
        char a = FindRep(e1);
        char b = FindRep(e2);
        if(a == b) return;
        parent[e1] = e2;
    }
};
int main()
{
    disjointSet ob;

    ob.Make('a');
    ob.Make('b');
    ob.Make('c');
    ob.Make('d');

    cout << "Representative of a: " << ob.FindRep('a') << endl;
    cout << "Representative of b: " << ob.FindRep('b') << endl;
    cout << "Representative of c: " << ob.FindRep('c') << endl;
    cout << "Representative of d: " << ob.FindRep('d') << endl;
    cout << endl;

    cout << "Performing union operation with a and b\n";
    ob.Union('a', 'b');
    cout << endl;

    cout << "Representative of a: " << ob.FindRep('a') << endl;
    cout << "Representative of b: " << ob.FindRep('b') << endl;
    cout << "Representative of c: " << ob.FindRep('c') << endl;
    cout << "Representative of d: " << ob.FindRep('d') << endl;
    cout << endl;

    cout << "Performing union operation with b and c\n";
    ob.Union('b', 'c');
    cout << endl;

    cout << "Representative of a: " << ob.FindRep('a') << endl;
    cout << "Representative of b: " << ob.FindRep('b') << endl;
    cout << "Representative of c: " << ob.FindRep('c') << endl;
    cout << "Representative of d: " << ob.FindRep('d') << endl;
    cout << endl;

    cout << "Performing union operation with c and d\n";
    ob.Union('c', 'd');
    cout << endl;

    cout << "Representative of a: " << ob.FindRep('a') << endl;
    cout << "Representative of b: " << ob.FindRep('b') << endl;
    cout << "Representative of c: " << ob.FindRep('c') << endl;
    cout << "Representative of d: " << ob.FindRep('d') << endl;

    return 0;
}
