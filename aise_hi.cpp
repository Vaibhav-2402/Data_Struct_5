#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number of digits u want in pyramid : "; cin>>n;

    int row = 1;
    
    while(row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
       
         while(col <= row )
        {         
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}