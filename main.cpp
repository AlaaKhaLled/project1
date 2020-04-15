#include <iostream>
#include"fcivector.h"
#include <vector>
#include "student.h"

// Alaa Khaled foad
// 20180049
#include"courses.h"


using namespace std;
void mainmenu();
template<class t>
void menu(fcivector<t>vec1);



int main()

{
  mainmenu();

    return 0;
}
 template<class t>
void menu(fcivector<t>vec1){


   char ans='Y',ans1;

   while(ans=='Y')
   {


       int operation=0;
       cout<<"What kind of operation would you like to perform?"<<endl;
       cout<<"1. Add element."<<endl;
       cout<<"2. Remove last element."<<endl;
       cout<<"3. Insert element at certain position."<<endl;
       cout<<"4. Erase element from a certain position."<<endl;
       cout<<"5. Clear."<<endl;
       cout<<"6. Display first element."<<endl;
       cout<<"7. Display last element."<<endl;
       cout<<"8. Display element at certain position."<<endl;
       cout<<"9. Display vector size."<<endl;
       cout<<"10. Display vector capacity."<<endl;
       cout<<"11. Is empty?"<<endl;
       cin>>operation;

       switch(operation)
       {
       case 1:

        {

           int Nelemnt;
           t elemnt;
            cout<<"how many element you would like to add"<<endl;
            cin>>Nelemnt;
            cout<<"enter element:"<<endl;
            for(int i=0 ;i<Nelemnt;i++){
                  cin>>elemnt;
                vec1.pushback(elemnt);
            }
              cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();



              }
        }
        break;
       case 2:
        {

            vec1.popback();

              cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();
              }
        }
        break;
       case 3:
        {   int indexx;
            t elment2;
            cout<<"please enter the index number"<<endl;
            cin>>indexx;
            cout<<"please enter the element"<<endl;
            cin>>elment2;
            vec1.insertt(vec1.beginn()+indexx,elment2);
                   cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();
              }
        }
        break;
      case 4:
        {
           int position;
           cout<<"please enter position"<<endl;
           cin>>position;
           vec1.erasee(vec1.beginn()+position);

                  cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();
              }
        }
        break;
       case 5:
        {
            vec1.clearr();
               cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
              }
        }
        break;
       case 6:
        {
            cout<<vec1.frontt()<<endl;
              cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();
              }
        }
        break;
       case 7:
        {
            cout<<vec1.backk()<<endl;
              cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
              }
        }
        break;
       case 8:
            {
                int index;
                cout<<"please enter index number"<<endl;
                cin>>index;
               cout<<vec1[index];
                      cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();
              }
            }
            break;
          case 9:
        {
            cout<<"vector size is "<<vec1.sizee()<<endl;
              cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
              }
        }
        break;
          case 10:
            {
                cout<<"vector capacity is"<<vec1.capacityy()<<endl;
                  cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
                  mainmenu();

              }
            }
            break;
          case 11:
            {

               cout<<vec1.emptyy()<<endl;
                 cout<<"Would you like to perform other operations? (Y/N)"<<endl;
              cin>>ans1;
              if(ans1=='Y'){
                ans='Y';
              }
              else
              {
                  ans='N';
              }
            }
            break;
          default:
            {
                cout<< "please enter a number from 1 to 11"<<endl;

            }

       }

    }

    }
void mainmenu()
 {

  int typevec;
   cout<<"Insert type of vector you would like to create:"<<endl;
   cout<<"1) list of integer"<<endl;
   cout<<"2) list of character"<<endl;
   cout<<"3) list of string"<<endl;
   cout<<"4) list of float"<<endl;
   cout<<"5) list of students"<<endl;
   cout<<"6) Exit"<<endl;

     cin>>typevec;


   switch(typevec)
   {
   case 1:
    {
        fcivector<int>vec1;

        cout<<"A vector of integers was created successfully"<<endl;
         menu(vec1);
    }
    break;
    case 2:
    {
        fcivector<char>vec1;
         cout<<"A vector of character was created successfully"<<endl;
         menu(vec1);
    }
    break;
    case 3:
    {
        fcivector<string>vec1;
         cout<<"A vector of string was created successfully"<<endl;
         menu(vec1);
    }
    break;
    case 4:
    {
        fcivector<float>vec1;
         cout<<"A vector of floats was created successfully"<<endl;
         menu(vec1);
    }
    break;
    case 5:
    {
        fcivector<student>vec1;
        student s1;
         cout<<"A vector of students was created successfully"<<endl;
         menu(vec1);

    }
    break;
    default:
        {
            cout<<"enter number from 1 to 5"<<endl;
        }

   }

   cout<<endl;

 }

