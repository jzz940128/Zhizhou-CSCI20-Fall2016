 /* Lab20 - Pointers
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/21/2016
   Description: Take the code by given, comment it 
   to demonstrate what it is doing 
 */
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10];//create a cstring with size 10
                int firstname = 0; //variable of firstname
                char *head = firststr; //create a character pointer head and point to firststr
                char *tail = firststr; // create a character pointer tail and point to firststr
                cout << "Please enter a 10 letter word or less" << endl;
                cin >> firststr;// ask user input firststr
                strlen(firststr);// returns an integer number that's the size of firstrstr
                firstname = strlen(firststr); //assign the firstrstr's size to firstname
                cout << "Your word is " << firststr << endl; //output the cstring firststr
                
                //if statement running by firstname less them 10
                if (firstname<10){
                                // while loop running by firststr(head pointee) is not null character
                                while (*head != '\0')
                                {               
                                                cout << *head;// cout firststr/ cout head pointee(the value )
                                                head++;// the addresss of the pointer plus one on each match
                                }
                }
                //running if the size of firststr bigger than 10 
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout<< endl;
                
                /*assign the end of address of firststr[] to tail. For example, if your input of firststr with a size 9, the last one is firststr[8]
                 so right now we did something like assgin the firststr[8] to *tail, actually we did &firststr[8] to tail*/ 
                tail = &firststr[strlen(firststr) - 1];
                
                //if statement  running by firstname(size of firststr less than 10)
                if (firstname < 10)
                {  //while loop running by we have something in *tail(*tail has value) 
                                while (*tail>0)
                                {
                                                cout << *tail;// output the character of user input from the end to beginning / output the tail pointee(the value)
                                                tail--; //the address value of tail subtract one on every match 
                                }
                }
                cout << endl;
                head = firststr; //reset pointer point to firststr/ assign the firststr to head 
                cout<<head;//output a value of user input
                tail = &firststr[strlen(firststr) - 1]; //pointer tail point to the last index of firststr
                cout<<endl;
                head++;// skip the first index value (address plus 1) for example your original value is abcde, rignt now is bcde'\0' 
                tail--;// skip the last index value(address minus 1) for example your original value is edcba right now is edcb'\0'
                
                // if statement campare the pointee head and tail(compare the value not the address)
                if (*head == *tail)
                {              
                    
                                cout << "It is an palindrome!" << endl;// output palindrome if they have same value
                }
                else
                {
                                cout << "It is not an palindrome" << endl;// output not an palindrome if they have different value
                }
 
                return 0;
}