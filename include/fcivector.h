#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template< class t>
class fcivector
{
    public:
        t* elements;
        int numberofelements; //number of elements in vector
        int capacity; //total storage

    public:
        fcivector(){ //constructor for initialization

       elements=new t[1];
        capacity=1;
        numberofelements=0;

        }
       void pushback(t val){
        if (capacity==numberofelements){
            t *arr2=new t[2*capacity];
        for (int i=0; i<numberofelements; i++)// add the elements in the new vector
          {
            arr2[i]=elements[i];
          }
        delete []elements;
         capacity*=2;
         elements=arr2;
        }
        elements[numberofelements]=val; //add the new element
        numberofelements++; //increment the element
}

int sizee()
{
    return numberofelements;
}
int capacityy(){

  return capacity;
}
bool emptyy()
{
  if(numberofelements==0){
    return true;
  }
  else
    return false;

}
t &operator[](int index){
  if(index>numberofelements){
    exit(0);
  }
  else
  {
      return elements[index];
  }

}

void clearr(){

numberofelements=0;
delete []elements;
elements=new t[capacity];

}
t* beginn(){

 return elements;
 }

t &frontt(){
return elements[0];

}
t &backk(){

return elements[(numberofelements-1)];
}
void popback(){
 numberofelements--;

}
void insertt(t* position , t val){

     int y=0;
  t* add=new t [numberofelements+1];
  for (int i=0;i<numberofelements;i++)
  {

      if(elements[i]==*position)
      {  add[y]=val;
          y++;

      }
      add[y]=elements[i];
          y++;
  }
  numberofelements++;
  elements=add;


 }



void erasee(t *position){
  int p=0;
  t* del=new t [numberofelements-1];
  for (int i=0;i<numberofelements;i++)
  {
      del[p]=elements[i];
      p++;
      if(elements[i]==*position)
      {
          i++;
      }
  }
  numberofelements--;
  elements=del;
}





};

#endif // FCIVECTOR_H
