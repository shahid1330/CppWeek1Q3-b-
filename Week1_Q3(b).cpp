#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[50];

  cout<<"Enter total number of elements=";
  cin>>n;
  cout << endl;

  for(i = 0; i < n;i++) 
  {
    cout<< "Enter the element of " <<i+1<< " = ";
    cin>>arr[i];
  }

  for(i=1;i<n;i++) 
  {

    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout<<endl<< "Largest element = " <<arr[0];

  return 0;
}
