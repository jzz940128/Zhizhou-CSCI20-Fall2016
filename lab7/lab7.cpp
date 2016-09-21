#include <iostream>
#include <string>
using namespace std;
/* Lab7 - Function
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/20/2016
   Description: create 2 functions with prameters to output a Song
                This song is by my favorite rapper logic. 
                you know the rap always have some wards not good,
                so I've tried to make them be able to read.
 */
 
 // chorus function, ouput the chorus with one parameters
 void chorus (string woah) {
   cout<<"Like "<<woah<<" \n"
   "Through it like "<<woah<<" \n"
   "Through it like "<<woah<<" \n"
   "Going through it like "<<woah<<" \n"
   "You already know\n"
   "You already know\n"
   "Gotta get it like "<<woah<<" \n"
   "In this bitch like "<<woah<<" \n"
   "Get it like, like, like "<<woah<<"\n"
   "Let's go\n"
   "Uh, I'ma get it like "<<woah<<endl;
   
   return;

  }
  
  
// verse1 function to ouput the first verse with 2 parameters.  
 void verses1 (string ward , string ward2) {
     
  cout<<"I've been feeling like a motha"<<ward<<"in' postman\n"
         "Sending letters to the people\n"
         "All this knowledge that I got, I'm like an old man\n"
         "Hold up, wait now oh man!\n"
         "Let me back up in this "<<ward2<<"\n"
         "I'm platinum in this "<< ward2<<", I'm rapping in this bitch\n"
         "Running the game, yeah I've been lappin' in this "<< ward2<<"\n"
         "You know it's alright\n"
          " "<<ward<<" around and they all might\n"
         "Look at a brother different, I've been at it all night\n"
         "I think I said it but I know I do it, this for everybody going through it"<<endl;
         
         return;
     
     }
     
// Verses2 function to ouput the lyrics of second verse     
  void verses2(string ward1 , string ward2) {
     cout<< "Back up in this motha"<<ward1<<"a livin' like a goddamn king\n"
     "Tell me money ain't a thing now\n"
     "30 thousand feet above the world right next to the wing\n"
     "Too high to hear the birds sing now\n"
     "All around the world and back again it's finally happenin'\n"
     "I'm lappin' in this luxury by nappin' in a big ass house\n"
     "Chillin' with my homies on the West side, West side\n"
     "Bringin' out my best side\n"
     "I was on the road for like a quarter I was in and out the border\n"
     "From London to Paris, yes it's very extraordinary\n"
     " "<<ward1<<" around and took the bus and a ferry\n"
     "Should've seen the itinerary, then we made it back home like woah\n"
     "Tell me how you're feelin', higher than the ceilin'\n"
     "I know I've been illin'\n"
     "Probably wonder where I'm at, "<<ward2<<" I've been chillin'\n"
     "Why they grillin'? Yeah I'm still in like I never left\n"
     "They know I had to go but then I brought it right back"<<endl;
  
      return;
  }
// Bridge function to ouput the lyrics of last part
   void Bridge() {
       cout<<"I get so high they wonder why no I can't go away\n"
          "I gotta hold my own, know that's the only way\n"
          "I've been vibin', let me guide em, I said I gotta know\n"
          "I've been ridin' for so long I think that it's time to go\n"
          "Feeling like an addict that ain't had it, up and at it in a minute\n"
          "If it hadn't been invented, my limit wouldn't be infinite\n"
          "I'm feeling like an infant in a womb\n"
          "I'ma be here 'til the tomb\n"
          "Lately I've been in my room\n"
          "Lookin' and lookin' at records on the wall\n"
          "Hold up"<<endl;
          
        return;
   }
   
   
int main () {
// intro of the song because is so short so I didn't make it function
  cout<<"[intro]"<<endl;
  cout<<"Aye, this that shit\n"
        "I'm looking at you 6ix\n"
        "I've been feeling like a"<<endl;

// call the verse 1 function to print verse 1
  cout<<"verse 1"<<endl;
    verses1("f**k" , "b**");
    cout<<endl;

// call the chorus function first time to print chorus 
  cout<<"chorus"<<endl;
    chorus ("woah");
    cout<<endl;

// call the verse 2 function to print verse 2  
  cout<<"verse2"<<endl;
    verses2("f**k" , "b**");
    cout<<endl;

// call the second time of chorus function    
  cout<<"chorus"<<endl;
    chorus ("woah");
    cout<<endl;
    
// call the bridge function
// Because I've alrdy have 2 functions with parameter, 
// so I didn't set parameter for this one
    cout<<"[Bridge]"<<endl;
     Bridge();
    
    return 0;
}