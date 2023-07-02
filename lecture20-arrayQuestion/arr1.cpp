#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;

        return v;
    }
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    
    vector<int> v;
    int i;

    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(2);

    vector<int> ans = reverse(v);
    cout<<"after reversing the vector"<<endl;
    print(ans);

    return 0;
}