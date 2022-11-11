


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



array
#include "array"
array <int, 5> nilai;
nilai.size() // length
nilai.begin()
nilai.end()



// CPP program to illustrate
// std::find
// CPP program to illustrate
// std::find
#include<bits/stdc++.h>
  
int main ()
{
    std::vector<int> vec { 10, 20, 30, 40 };
  
    // Iterator used to store the position
    // of searched element
    std::vector<int>::iterator it;
  
    // Print Original Vector
    std::cout << "Original vector :";
    for (int i=0; i<vec.size(); i++)
        std::cout << " " << vec[i];
  
    std::cout << "\n";
  
    // Element to be searched
    int ser = 30;
  
    // std::find function call
    it = std::find (vec.begin(), vec.end(), ser);
    if (it != vec.end())
    {
        std::cout << "Element " << ser <<" found at position : " ;
        std::cout << it - vec.begin() << " (counting from zero) \n" ;
    }
    else
        std::cout << "Element not found.\n\n";
  
    return 0;
}
