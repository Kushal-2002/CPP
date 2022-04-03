#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int num;
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for (int i = 0; i < num; i++)
    {
        maxNo = max(array[i], maxNo);
        minNo = min(array[i], minNo);
    }
    cout << "Max No.= " << maxNo << endl;
    cout << "Min No.= " << minNo;

    return 0;
}