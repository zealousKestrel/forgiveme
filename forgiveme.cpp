


search 1
#include <iostream>
using namespace std;
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

int main () 
{
  int a[] = {3, 6, 8, 33};
  int x = 8;
  bool exists = find(begin(a), end(a), x) != end(a);
  cout << exists << endl;
}

search 2
#include <iostream>
using namespace std;


void searchvalue(int arr[],int size,int value)
{

     for(int i=0;i<size;i++)
     {
         if(arr[i]==value)
         {
            cout<<"value present at index no:"<<i+1<<endl;
            return;
         }

     }
     cout<<"value do not exist"<<endl;

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};

    int n=7;

    int val;
    cout<<"Enter the value you want to search"<<endl;
    cin>>val;

    searchvalue(arr,n,val);

    return 0;
}

