#include <iostream>
#include <vector>
using namespace std;

vector<int> bitStuffing(vector<int> &arr)
{
   
    int i = 0;

    
    int count = 0;

    
    vector<int> ans;

    
    while (i < arr.size())
    {
        
        while (i < arr.size() && arr[i] == 1 && count < 5)
        {
            ans.push_back(arr[i]);
            i++;
            count++;
        }

       
        if (arr[i] == 0)
        {
            ans.push_back(arr[i]);
            i++;
        }
        else if (count == 5)
        {
            ans.push_back(0);
        }

        count = 0;
    }
    return ans;
}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Bit Stuffing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    arr = bitStuffing(arr);
    cout << "After Bit Stuffing: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}

