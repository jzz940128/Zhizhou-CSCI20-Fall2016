/* Program#5 - Final
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   12/14/2016
   Description: 2 vs 2 fighting game. each player pick 2 heroes from 8 characters
   and fight each other. How much damage you can make is random. Luck is the most
   important thing in this game.
 */ 
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

  // class fightinggame  
class RealFighting {
    public:
    int Pick1stCharacter(int firstpick); // declare the int function of pick 1st character
    int Pick2ndCharacter(int secondpick); // declare the int function of pick 2nd character

};
// return the value of the number of 1st pick
int RealFighting :: Pick1stCharacter(int firstpick) {
    return firstpick;
}
// return the value of the number of 2nd pick
int  RealFighting :: Pick2ndCharacter(int secondpick){
    return secondpick;
}
int main() {

// haracters name
    string Characters[9];
    Characters[0] = "Salesman";
    Characters[1] = "Teacher";
    Characters[2] = "DarkDoctor";
    Characters[3] = "Student";
    Characters[4] = "Hunter";
    Characters[5] = "SunnyDoctor";
    Characters[6] = "Labor";
    Characters[7] = "NoobPlayer";
    Characters[8] = "GirlFriend"; 
    
    //build Normall spells
    string NormallSpells[9];
    NormallSpells[0] = "Business feet: Show out the feet that are over 20 years running for buissiness and never wash shoes.";
    NormallSpells[1] = "Lots of Assignments: Essays, exam, tests are coming up to everybody.";
    NormallSpells[2] = "dark inject: inject you some wrong medicine";
    NormallSpells[3] = "Get drunk: Chilling at weekend and get drunk, power is up.";
    NormallSpells[4] = "Track: Make a track.";
    NormallSpells[5] = "Hospital Payment: A huge hospital fees payment, leads to a people get cardiopathy.";
    NormallSpells[6] = "Angry brick: use brick keep hitting one enemy 3 times, total damage is 300, after this spell he need to stop 1 round to find another brick.";
    NormallSpells[7] = "Make you mad!: make teammates mad";
    NormallSpells[8] = "Black Friday: GirlFriend is shopping! shopping! shopping! if you are not rich You need to spend couple days to cry.";
    
// List the character and spell
cout<<"Characters library: "<<endl;
int z = 0;
for(z=0; z<9; z++) {
    cout<<z<<"."<<Characters[z]<<endl<<" Spells: "<<NormallSpells[z]<<endl;
}    
    //create damage
    int spelldamage[9];
    int k = 0;
    //assign the damage value to damage
    for(k = 0; k<9; k++) {
    spelldamage[k] = 100;
}
    
// create four variable to store the characters that player picked
    string hero1; // player1's first hero
    string hero2; // player1's second hero
    string hero3; // player2's first hero
    string hero4; // player2's second hero

// create 4 variable to let people input the number of characters
    int player1pick1 = 0;
    int player1pick2 = 0;
    int player2pick1 = 0;
    int player2pick2 = 0;
// store the damage of picked characters' spells
    int hero1_spell = 0; 
    int hero2_spell = 0; 
    int hero3_spell = 0;
    int hero4_spell = 0;
// Object player1 and player2
RealFighting Player1;
RealFighting Player2;
   //player1 pick first character
    cout<<"Player1 pick first hero(enter 0 - 8): "<<endl;
    cin>>player1pick1;// input 2 pick
    cout<<"you picked: #"<<Player1.Pick1stCharacter(player1pick1)<<"character."<<endl; // 
    hero1 = Characters[player1pick1];
    hero1_spell = spelldamage[player1pick1];// get spell
    
   //player2 pick first character
    cout<<"Player2 pick first hero(enter 0 - 8): "<<endl;
        cin>>player2pick1;
        // while loop running by player2 first pick is same to player1's
    while(player2pick1 == player1pick1) {
        cout<<"you cant pick same character!! please repick:"<<endl;
        cin>>player2pick1;
    }
   cout<<"you picked: #"<<Player2.Pick1stCharacter(player2pick1)<<"character."<<endl;
    hero3 = Characters[player2pick1];
    hero3_spell = spelldamage[player2pick1];// get spell


    //player2 pick second character
    cout<<"Player2 pick second hero(enter 0 - 8): "<<endl;
    cin>>player2pick2;
    //while loop running by player2's second pick same as the picked heroes.
     while(player2pick2 == player1pick1 || player2pick2 == player2pick1) {
        cout<<"you cant pick same character!! please repick:"<<endl;
        cin>>player2pick2;
    }
    cout<<"you picked: #"<<Player2.Pick2ndCharacter(player2pick2)<<"character"<<endl;
    hero4 = Characters[player2pick2];
    hero4_spell = spelldamage[player2pick2];// get spell


    //player1 pick second character
    cout<<"Player1 pick second hero(enter 0 - 8): "<<endl;
    cin>>player1pick2;
    //while loop running by player1's second pick same as the picked heroes.
    while(player1pick2 == player1pick1 || player1pick2 == player2pick1 || player1pick2 == player2pick2) {
        cout<<"you cant pick same character!! please repick:"<<endl;
        cin>>player1pick2;
    }
    cout<<"you picked: #"<<Player1.Pick2ndCharacter(player1pick2)<<"character"<<endl;
    hero2 = Characters[player1pick2];
    hero2_spell = spelldamage[player1pick2];// get spell

//output player1 and player2's characters
 cout<<"Player1: "<<hero1<<" & "<<hero2<<" VS ";
 cout<<"Player2: "<<hero3<<" & "<<hero4<<endl;

 // life of picked heros
 int hero1_life = 1000;
 int hero2_life = 1000;
 int hero3_life = 1000;
 int hero4_life = 1000;
 // description
 cout<<"Game Start!!! "<<endl;
 cout<<"****************Description***************"<<endl;
 cout<<"The order in fighting is Hero1(player1) - Hero3(Player2) - Hero4(player2) - Hero2(player1)"<<endl;
 cout<<"To hit their enemy should should choose wich enemy you want to hit by enter 1 - 4(1 & 2 are player1's 2 heroes, 3 & 4 are player2's)"<<endl;
 cout<<"All heroes spell has same basic damage 100. How many damage you can make depends a random number. 0 means none, 1 means normall, 2 means double"<<endl;
 cout<<"All characters has same Life(HP) 1000"<<endl;
 // set srand time
 srand(time(0));
 int bonus_damage = 0; // store the random ratio

 // A while loop for keep figting till player1 or player2 has no character
 while((hero1_life>0 || hero2_life>0) && (hero3_life>0 || hero4_life>0)) {
     // variable to choose attack hero
     int attack1; //player1
     int attack2; // player2
     char chooseulti;
        cout<<"start!"<<endl;
        // choose enemy
        cout<<"hero1 use spell, enter a enemy u want to hit(3 or 4): ";
        cin>>attack1; 
        // randome the damage ratio
        cout<<"rand your damage ratio..."<<endl;
        bonus_damage = rand()% 3;
        // if ratio is 0 no damage
        if(bonus_damage == 0) {
               cout<<"you rand a "<<bonus_damage<<endl;
               hero1_spell = 0;
           }
          // if ratio is 1 normall damage
         else if (bonus_damage == 1) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 100% damage"<<endl;
             hero1_spell = hero1_spell;
         }
         // if ratio is 2, double damage
          else if(bonus_damage == 2) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 200% damage"<<endl;
             hero1_spell = hero1_spell * 2;
          }
        // hero1 choose hero3
       if(hero1_life>=0 && attack1 == 3) {
            hero3_life = hero3_life - hero1_spell;
              cout<<hero1<<" use spell to "<<hero3<<" make"<<hero1_spell<<"damage!"<<endl;
        // if hero3 dead  damage change to hero4
         if(hero3_life<= 0) {
                cout<<"hero3 dead, the spell use to hero 4."<<endl;
                hero4_life = hero4_life - hero1_spell;
                cout<<hero1<<" use spell to "<<hero4<<" make"<<hero1_spell<<"damage!"<<endl;
            }
        }
        //hero1 choose hero4
        else if(hero1_life>=0 && attack1 == 4) {
            hero4_life = hero4_life - hero1_spell;
            cout<<hero1<<"use spell to "<<hero4<<"make"<<hero1_spell<<"damage!"<<endl;
            
            // if hero4 dead, damage goes to hero3
            if(hero4_life <= 0) {
             cout<<"hero4 dead, the spell use to hero 3."<<endl;
             hero3_life = hero3_life - hero1_spell;
             cout<<hero1<<" use spell to "<<hero3<<" make"<<hero1_spell<<"damage!"<<endl;
             
            }
        } 
        //if enter something not 3 or 4, no damage make
        else {
            cout<<"make no damage."<<endl;
        }
        hero1_spell = 100; // reset the random damage to 100
        //hero3 hit
        cout<<" hero3 use spell, enter a enemy u want to hit(1 or 2): ";
        cin>>attack2;
        // ratio
         cout<<"rand your damage ratio..."<<endl;
        bonus_damage = rand()% 3;
        if(bonus_damage == 0) {
               cout<<"you rand a "<<bonus_damage<<endl;
               hero3_spell = 0;
           }
         else if (bonus_damage == 1) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 100% damage"<<endl;
             hero3_spell = hero3_spell;
         }
          else if(bonus_damage == 2) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 200% damage"<<endl;
             hero3_spell = hero3_spell * 2;
          }
 
        if(hero3_life>=0 && attack2 ==1) {
            cout<<hero3<<" use spell to "<<hero1<<"make"<<hero3_spell<<"damage!"<<endl;
            hero1_life = hero1_life - hero3_spell;
  
            if(hero1_life<= 0) {
                cout<<"hero1 dead, the spell use to hero 2."<<endl;
                 cout<<hero3<<" use spell to "<<hero2<<"make"<<hero3_spell<<"damage!"<<endl;
                hero2_life = hero2_life - hero3_spell;
               
            }
        }
        else if(hero3_life>=0 &&attack2 == 2) {
             cout<<hero3<<" use spell to "<<hero2<<"make"<<hero3_spell<<"damage!"<<endl;
            hero2_life = hero2_life - hero3_spell;
          
            if(hero2_life<= 0) {
                cout<<"hero1 dead, the spell use to hero 1."<<endl;
                 cout<<hero3<<" use spell to "<<hero1<<"make"<<hero3_spell<<"damage!"<<endl;
                hero1_life = hero1_life - hero3_spell;
               
            }
        }
                 else {
            cout<<"make no damage."<<endl;
        }
        hero3_spell = 100;
        //hero4 hit
        cout<<"hero4 use spell, enter a enemy u want to hit(1 or 2): ";
        cin>>attack2;
        //
         cout<<"rand your damage ratio..."<<endl;
        bonus_damage = rand()% 3;
        if(bonus_damage == 0) {
               cout<<"you rand a "<<bonus_damage<<endl;
               hero4_spell = 0;
           }
         else if (bonus_damage == 1) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 100% damage"<<endl;
             hero4_spell = hero4_spell;
         }
          else if(bonus_damage == 2) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 200% damage"<<endl;
             hero4_spell = hero4_spell * 2;
          }
          
        if(hero4_life>=0 && attack2 ==1) {
             cout<<hero4<<" use spell to "<<hero1<<" make"<<hero4_spell<<"damage!"<<endl;
            hero1_life = hero1_life - hero4_spell;
            
            if(hero1_life<= 0) {
                cout<<"hero1 dead, the spell use to hero 2."<<endl;
                cout<<hero4<<" use spell to "<<hero2<<" make"<<hero4_spell<<"damage!"<<endl;
                hero2_life = hero2_life - hero4_spell;
               
                
            }
        }
        else if(hero4_life>=0 && attack2 == 2) {
            cout<<hero4<<" use spell to "<<hero2<<" make"<<hero4_spell<<"damage!"<<endl;
            hero2_life = hero2_life - hero4_spell;
            
            if(hero2_life<= 0) {
                cout<<"hero2 dead, the spell use to hero 1."<<endl;
                cout<<hero4<<" use spell to "<<hero1<<" make"<<hero4_spell<<" damage!"<<endl;
                hero1_life = hero1_life - hero4_spell;
              
            }
        }
         else {
            cout<<"make no damage."<<endl;
        }
        hero4_spell = 100;
        //hero2 hit
         cout<<"hero2 use spell, enter a enemy u want to hit(3 or 4): ";
        cin>>attack1;
    
         cout<<"rand your damage ratio..."<<endl;
        bonus_damage = rand()% 3;
        if(bonus_damage == 0) {
               cout<<"you rand a "<<bonus_damage<<endl;
               hero2_spell = 0;
           }
         else if (bonus_damage == 1) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 100% damage"<<endl;
             hero2_spell = hero2_spell;
         }
          else if(bonus_damage == 2) {
             cout<<"you rand a "<<bonus_damage<<endl;
             cout<<"make 200% damage"<<endl;
             hero2_spell = hero2_spell * 2;
          }
        
        if(hero2_life>=0 &&attack1 == 3) {
            cout<<hero2<<" use spell to "<<hero3<<" make"<<hero2_spell<<" damage!"<<endl;
            hero3_life = hero3_life - hero2_spell;
           
            if(hero3_life<= 0) {
                cout<<"hero3 dead, the spell use to hero 4."<<endl;
                cout<<hero2<<" use spell to "<<hero4<<" make"<<hero2_spell<<" damage!"<<endl;
                hero4_life = hero4_life - hero2_spell;
        
            }
        }
        else if(hero2_life>=0 && attack1 == 4) {
            cout<<hero2<<" use spell to "<<hero4<<" make"<<hero2_spell<<" damage!"<<endl;
            hero4_life = hero4_life - hero2_spell;
           
            if(hero4_life<= 0) {
                cout<<"hero4 dead, the spell use to hero 3."<<endl;
                cout<<hero2<<" use spell to "<<hero3<<" make"<<hero2_spell<<" damage!"<<endl;
                hero3_life = hero3_life - hero2_spell;
                
            }
        } 
        else {
            cout<<"make no damage."<<endl;
        }
        hero2_spell = 100;
        
        //After all heros used spell, output the data of each hearo
        //Player1's DATA
        cout<<endl<<"Player1: ";
        // hero1 data
        if(hero1_life>0){
        cout<<hero1<<" HP: "<<hero1_life<<endl; // if hero not dead output hp
        }
        else{
            cout<<hero1<<" dead"<<endl; // output hero1 dead
        }
        // output hero2 data
        if(hero2_life>0){
        cout<<hero2<<" HP: "<<hero2_life<<endl; 
        }
         else{
            cout<<hero2<<" dead"<<endl;
        }
        //DATA of player2
        cout<<endl<<"Player2: ";
        //hero3
        if(hero3_life>0){
        cout<<hero3<<" HP: "<<hero3_life<<endl;
        }
         else{
            cout<<hero3<<" dead"<<endl;
        }
        //hero4
        if(hero4_life>0){
        cout<<hero4<<" HP: "<<hero4_life<<endl; 
        }
        else{
            cout<<hero4<<" dead"<<endl;
        }
        
 }
 // Output the winner
  if(hero1_life <=0 && hero2_life <=0 ) { // if player1's heros  are all dead
      cout<<"winner is player2"<<endl;
  }  
  else{ // player2's hero are all dead
      cout<<"winner is player1"<<endl;
  }
} 