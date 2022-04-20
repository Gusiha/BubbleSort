#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  const int N = 8;
  int arr[N]{};
  for (int i = 0; i<N;i++)
    {
      arr[i] = rand()%10;
      cout << "arr[" <<i<<"] = " << arr[i] << endl;
    }
  cout << endl;

  
  for (int i = 0, temp = 0; i<N-1;i++)
    {
     for(int j = 0; j< N - i - 1; j++) 
       {
         if(arr[j] > arr[j+1])
         {
           temp = arr[j+1];
           arr[j+1] = arr[j];
           arr[j] = temp;
         }
       }
      
    }

   for (int i = 0; i<N;i++)
    {
     
      cout << "arr[" <<i<<"] = " << arr[i] << endl;
    }
  
  
}