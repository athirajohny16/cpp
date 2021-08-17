#include<iostream.h>
using namespace std;
int main()
{
    int limit,array[20],i,j,temp;
    //array size or limit
    cout<<"Enter the array limit";
    cin>>limit;
    //array contents
    cout<<"Enter the array elements";
    for(i=0;i<limit;i++)
    {
        cin>>array[limit];
    }
    //sorting
    for(i=0; i<limit-1; i++){
        for(j=i+1; j<limit; j++){
            if( array[j] > array[i]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    //display array
    cout<<"Sorted array is:";
    for(i=0; i<limit; i++){
        cout<<array[i];
    }
    
}