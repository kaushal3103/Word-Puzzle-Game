#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;
void pattern1()
{
  cout<<endl;

  cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1. You have to find 9 random words from the pattern below. "<<endl;

  cout<<"2. You have to press Enter everytime you done typing a word."<<endl;

  cout<<"3. Caps lock key must be on while typing words. "<<endl;

  cout<<endl;
  cout<<endl;

  for ( int i = 0 ; i < 12 ; i++)
  {
    for ( int j = 0 ; j < 12 ; j++)
    {
      if ( i==1 && j==1)
      {
        cout<<" I ";
      }
      else if ( i==1 && j ==2)
      {
        cout<<" N ";
      }
      else if ( i==1 && j ==3)
      {
        cout<<" V ";
      }
      else if ( i==1 && j ==4)
      {
        cout<<" E ";
      }
      else if ( i==1 && j ==5)
      {
        cout<<" S ";
      }
      else if ( i==1 && j ==6)
      {
        cout<<" T ";
      }
      else if ( i==1 && j ==7)
      {
        cout<<" I ";
      }
      else if ( i==1 && j ==8)
      {
        cout<<" G ";
      }
      else if ( i==1 && j ==9)
      {
        cout<<" A ";
      }
      else if ( i==1 && j ==10)
      {
        cout<<" T ";
      }
      else if ( i==1 && j ==11)
      {
        cout<<" E ";
      }
      else if ( i ==2 && j == 2)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 3)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 4)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 5)
      {
        cout<<" N ";
      }
      else if ( i ==2 && j == 6)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 7)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 8)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 9)
      {
        cout<<" X ";
      }
      else if ( i ==2 && j == 10)
      {
        cout<<" R ";
      }
      else if ( i ==3 && j ==3)
      {
        cout<<" S ";
      }
      else if ( i ==3 && j ==4)
      {
        cout<<" T ";
      }
      else if ( i ==3 && j ==5)
      {
        cout<<" A ";
      }
      else if ( i ==3 && j ==6)
      {
        cout<<" T ";
      }
      else if ( i ==3 && j ==7)
      {
        cout<<" U ";
      }
      else if ( i ==3 && j ==8)
      {
        cout<<" S ";
      }
      else if ( i ==3 && j ==9)
      {
        cout<<" E ";
      }
      else if ( i ==4 && j==4)
      {
        cout<<" X ";
      }
      else if ( i ==4 && j==5)
      {
        cout<<" K ";
      }
      else if ( i ==4 && j==6)
      {
        cout<<" X ";
      }
      else if ( i ==4 && j==7)
      {
        cout<<" X ";
      }else if ( i ==4 && j==8)
      {
        cout<<" F ";
      } 
      else if ( i ==5 && j==5)
      {
        cout<<" E ";
      }
      else if ( i ==5 && j==6)
      {
        cout<<" L ";
      }
      else if ( i ==5 && j==7)
      {
        cout<<" N ";
      } 
      else if ( i==6 && j == 6)
      {
        cout<<" I ";
      }
      else if ( i ==7 && j==5)
      {
        cout<<" B ";
      }
      else if ( i ==7 && j==6)
      {
        cout<<" N ";
      }
      else if ( i ==7 && j==7)
      {
        cout<<" X ";
      }
      else if ( i ==8 && j==4)
      {
        cout<<" B ";
      }
      else if ( i ==8 && j==5)
      {
        cout<<" A ";
      }
      else if ( i ==8 && j==6)
      {
        cout<<" K ";
      }
      else if ( i ==8 && j==7)
      {
        cout<<" E ";
      }
      else if ( i ==8 && j==8)
      {
        cout<<" D ";
      }
      else if ( i ==9 && j==3)
      {
        cout<<" L ";
      }
      else if ( i ==9 && j==4)
      {
        cout<<" Y ";
      }
      else if ( i ==9 && j==5)
      {
        cout<<" Y ";
      }
      else if ( i ==9 && j==6)
      {
        cout<<" X ";
      }
      else if ( i ==9 && j==7)
      {
        cout<<" X ";
      }
      else if ( i ==9 && j==8)
      {
        cout<<" X ";
      }
      else if ( i ==9 && j==9)
      {
        cout<<" X ";
      }
      else if ( i ==10 && j==2)
      {
        cout<<" E ";
      }
      else if ( i ==10 && j==3)
      {
        cout<<" X ";
      }
      else if ( i ==10 && j==4)
      {
        cout<<" X ";
      }
      else if ( i ==10 && j==5)
      {
        cout<<" O ";
      }
      else if ( i ==10 && j==6)
      {
        cout<<" D ";
      }
      else if ( i ==10 && j==7)
      {
        cout<<" D ";
      }
      else if ( i ==10 && j==8)
      {
        cout<<" X ";
      }
      else if ( i ==10 && j==9)
      {
        cout<<" X ";
      }
      else if ( i ==10 && j==10)
      {
        cout<<" X ";
      }
      else if ( i ==11 && j==1)
      {
        cout<<" E ";
      }
      else if ( i ==11 && j==2)
      {
        cout<<" Q ";
      }
      else if ( i ==11 && j==3)
      {
        cout<<" U ";
      }
      else if ( i ==11 && j==4)
      {
        cout<<" I ";
      }
      else if ( i ==11 && j==5)
      {
        cout<<" V ";
      }
      else if ( i ==11 && j==6)
      {
        cout<<" A ";
      }
      else if ( i ==11 && j==7)
      {
        cout<<" L ";
      }
      else if ( i ==11 && j==8)
      {
        cout<<" E ";
      }
      else if ( i ==11 && j==9)
      {
        cout<<" N ";
      }
      else if ( i ==11 && j==10)
      {
        cout<<" T ";
      }
      else if ( i ==11 && j==11)
      {
        cout<<" X ";
      }
      else 
      {
        cout<< "   ";
      }
    }
    cout<<endl;
  }
  cout<<endl;

  cout<<"Few HINTS :-"<<endl;

  cout<<"There is a word in a pattern which means -- to eat something by taking small bites "<<endl;

  cout<<"There is a word in a pattern which means -- strange or unusal "<<endl;

  cout<<endl;

  vector<string>v1={"INVESTIGATE","SNAKE","STATUS","INFER","LINK","EQUIVALENT","NIBBLE","BAKED","ODD"};

  vector<string>v2;

  string temp[9];

  cout<<"Enter your words below :- "<<endl;
  
  for ( int i = 0 ; i<9 ; i++){
    cin>>temp[i];
    v2.push_back(temp[i]);
  }

  cout<<endl;

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());

  vector<string> :: iterator it , st ,lt;

  it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end() , v.begin() );

  cout<<"WORDS YOU HAVE GUESSED CORECTLY :-"<<endl;
  

  for( st = v.begin(); st !=it ; st++){
    cout<<*st<<" " ;
  }
  cout<<endl;

  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<endl;

  cout<<"WORDS YOU COUDN'T GUESSED CORRECT :-"<<endl;
  

  for ( st = v.begin(); st != lt;st++){
    cout<<*st<<" ";
  }
  
}


  void pattern2()
  {
  cout<<endl;

   cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1. You have to find 16 random words from the pattern below."<<endl;

  cout<<"2. You have to press Enter everytime you done typing a word. "<<endl;

   cout<<"3. Caps lock key must be on while typing words. "<<endl;

  
  cout<<endl;
  cout<<endl;

  cout << "H  I  D  E  O  U  S  L  F  R  A  N  K  E  N "<<endl;
  cout << "S  T  D  E  T  D  O  G  S  L  E  D  I  N  E "<<endl;
  cout << "I  S  T  N  E  N  O  R  Y  B  D  R  O  L  L "<<endl;
  cout << "H  G  B  S  E  S  P  R  O  C  E  N  A  Y  C "<<endl;
  cout << "M  E  R  S  H  I  E  O  F  T  H  N  A  R  R "<<endl;
  cout << "D  R  O  E  S  D  R  A  M  A  I  O  H  O  I "<<endl; 
  cout << "R  M  T  N  E  Y  E  F  C  U  T  O  O  T  C "<<endl;
  cout << "E  A  H  I  C  D  D  R  R  T  H  A  R  A  C "<<endl;
  cout << "F  N  E  L  I  A  E  U  T  C  R  V  R  R  I "<<endl;
  cout << "U  Y  R  C  E  A  T  D  T  E  D  E  I  O  T "<<endl;
  cout << "G  T  I  E  H  E  M  E  I  S  D  N  B  B  C "<<endl;
  cout << "E  U  O  D  N  S  R  T  E  R  R  E  L  A  R "<<endl;
  cout << "S  N  O  E  N  I  T  S  U  J  B  G  E  L  A "<<endl;
  cout << "T  T  H  E  F  C  O  M  P  A  N  I  O  N  K "<<endl;

  cout<<endl;

  cout<<"Few HINTS :-"<<endl;

  cout<<"There is a word in a pattern which means -- a place that is safe "<<endl;

  cout<<"There is a word in a pattern which means -- a sledged designed to pulled by dogs "<<endl;

  cout<<endl;

  vector<string>v1 = { "GERMANY","REFUGE","AVENEG","SUCIDE","HIDEOUS","COMPANION","BROTHER","RUIN","DRAMA","HORRIBLE","DOGSLED"};

  vector<string>v2;

  cout<<"Enter your words below :-"<<endl;
  
  string temp[11] ;

  for ( int i = 0 ; i < 11 ; i++){
    cin >> temp[i];
    v2.push_back(temp[i]);
  }
  
  cout<<endl;

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());
  
  vector<string>::iterator it ,st,lt ;

  it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<"WORDS YOU HAVE GUESSED CORECTLY :-"<<endl;
  

  for( st = v.begin(); st !=it ; st++){
    cout<<*st<<" " ;
  }

  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<endl;

  cout<<"WORDS YOU COUDN'T GUESSED CORRECT :-"<<endl;

  for ( st = v.begin(); st != lt;st++){
    cout<<*st<<" ";
  }
  }

void pattern3()
{ 
  cout<<endl;
  
  cout<<"Pattern theme - Harry Potter Movies "<<endl;

  cout<<endl;
  cout<<endl;

  cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1. You have to find 16 words from the pattern below which are releated to the Theme. "<<endl;

  cout<<"2 .You have to press Enter everytime you done typing a word."<<endl;

   cout<<"3. Caps lock key must be on while typing words. "<<endl;

  cout<<endl;

  cout<<"D  T  F  A  R  C  H  C  T  I  W  R"<<endl;
  cout<<"I  R  E  A  R  E  R  E  T  T  O  P"<<endl;
  cout<<"R  H  R  O  N  A  L  D  R  S  F  C"<<endl;
  cout<<"G  O  W  H  E  R  M  I  O  N  E  H"<<endl;
  cout<<"A  F  E  R  O  D  E  L  B  M  U  D"<<endl;
  cout<<"H  W  A  T  R  O  M  E  D  L  O  V"<<endl;
  cout<<"G  I  S  J  K  R  O  W  L  I  N  G"<<endl;
  cout<<"H  Z  L  A  E  R  H  R  N  G  W  E"<<endl;
  cout<<"A  A  E  A  S  T  R  A  K  R  A  D"<<endl;
  cout<<"R  R  Y  L  C  E  C  R  O  A  Y  R"<<endl;
  cout<<"R  D  H  B  A  A  R  H  E  N  A  E"<<endl;
  cout<<"Y  R  Y  U  R  W  C  H  T  G  N  W"<<endl;
  cout<<"H  Y  H  S  D  R  R  D  K  E  T  R"<<endl;
  cout<<"D  S  T  R  A  W  G  O  H  R  G  B"<<endl;
  cout<<endl;

  cout<<"Few HINTS :-"<<endl;

  cout<<"There is a word in a pattern that is the name of the Author of the HARRY POTTER MOVIE "<<endl;

  cout<<"There is a word in a pattern that is the first name of Harry's friend "<<endl;

  cout<<endl;

  vector<string>v1 = { "HARRY","POTTER","JKROWLING","RONALD","WEASLY","HERMOINE"," GRANGER","HOGWARTS","WITCHCRAFT","WIZARDRY","VOLDEMORT","ALBUS","DUMBLEDORE","SCAR","HAGRID","DARKARTS"};

  vector<string>v2 ;

  string temp[16] ;

  cout<<"Enter your words below :- "<<endl;
  
  for ( int i = 0 ; i<16;i++){
    cin>>temp[i];
    v2.push_back(temp[i]);
  }

  cout<<endl;
  
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());

  vector<string> :: iterator it , st ,lt;

  it = set_intersection( v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  
  cout<<"WORDS YOU HAVE GUESSED CORECTLY :-"<<endl;

  for( st = v.begin(); st !=it ; st++){
    cout<<*st<<" " ;
  }

  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<endl;

  cout<<"WORDS YOU COUDN'T GUESSED CORRECT :-"<<endl;

  for ( st = v.begin(); st != lt;st++){
    cout<<*st<<" ";
  }

 } 
 
 void pattern4()
 {  
  cout<<endl;

  cout<<"Pattern Theme - Guardians Of The Galaxy Movie"<<endl;

  cout<<endl;
  cout<<endl;

  cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1. You have to find 20 words from the pattern below which are releated to the Theme."<<endl;

  cout<<"2. You have to press Enter everytime you done typing a word."<<endl;

  cout<<"3. Caps lock key must be on while typing words. "<<endl;

  cout<<endl;

    cout<<"R  E  D  R  N  E  B  U  L  A  R  R"<<endl;
    cout<<"R  A  P  O  K  O  R  A  T  H  T  U"<<endl;
    cout<<"K  U  V  N  E  G  A  M  O  R  A  S"<<endl;
    cout<<"N  D  E  A  W  R  X  A  N  D  A  R"<<endl;
    cout<<"O  N  A  N  G  A  R  B  A  O  R  B"<<endl;
    cout<<"W  O  E  T  H  E  K  Y  L  N  E  R"<<endl;
    cout<<"H  Y  P  E  T  E  R  Q  U  I  L  L"<<endl;
    cout<<"E  O  S  N  E  H  M  S  L  S  A  A"<<endl;
    cout<<"R  M  Y  E  K  H  I  I  O  A  N  G"<<endl;
    cout<<"E  O  E  A  C  K  L  N  A  A  O  E"<<endl;
    cout<<"N  R  U  N  O  V  A  P  R  I  M  E"<<endl;
    cout<<"K  A  K  O  R  H  N  A  D  R  A  X"<<endl;
    cout<<"P  G  X  R  T  O  O  R  G  O  E  R"<<endl;
    cout<<"R  R  H  Q  D  R  O  L  R  A  T  S"<<endl;

    cout<<endl;

    cout<<"Few HINTS :-"<<endl;

    cout<<"There is a word in a pattern which means -- a spherical object "<<endl;

    cout<<"There is a word in a pattern that is the name of the charachter played by famous actor ''Sylvester Stallone''  "<<endl;

    cout<<endl;

    vector<string>v1 = { "STARLORD","RONAN","MILANO","XANDAR","PETERQUILL","NEBULA","YONDU","KNOWHERE","GAMORA","ORB","RAVAGERS","KREE","DRAX","KORATH","THEKYLN","NOVAPRIME","ROCKET","GROOT","THANOS","MORAG"};

  vector<string>v2;

  cout<<"Enter your words below :-"<<endl;

  string temp[20] ;

  for ( int i = 0 ; i< 20 ; i++){
    cin >> temp[i];
    v2.push_back(temp[i]);
  }

  cout<<endl;

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());

  vector<string>::iterator it , st ,lt;

  it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end() , v.begin() );

  cout<<endl;

  cout<<"WORDS YOU HAVE GUESSED CORECTLY :-"<<endl;

  for( st = v.begin(); st !=it ; st++){
    cout<<*st<<" " ;
  }

  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<endl;

  cout<<"WORDS YOU COUDN'T GUESSED CORRECT:-"<<endl;

  for ( st = v.begin(); st != lt;st++){
    cout<<*st<<" ";
  }
 } 
 
 void pattern5()
 {   
  cout<<endl;;

  cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1. You have to find 5 random words from the pattern below."<<endl;

  cout<<"2. You have to press Enter everytime you done typing a word."<<endl;

   cout<<"3. Caps lock key must be on while typing words. "<<endl;

  cout<<endl;
  cout<<endl;

  for ( int i = 0 ; i < 8 ; i++)
  {
    for ( int j = 0 ; j < 8 ; j++)
    {
        if ( i == 1 && j ==1)
        {
          cout<<" P ";
        } 
        else if ( i==1 && j==2)
        {
          cout<<" R ";
        }
        else if ( i==1 && j==3)
        {
          cout<<" O ";
        }
        else if ( i==1 && j==4)
        {
          cout<<" M ";
        }
        else if ( i==1 && j==5)
        {
          cout<<" O ";
        }
        else if ( i==1 && j==6)
        {
          cout<<" T ";
        }
        else if ( i==1 && j==7)
        {
          cout<<" E ";
        } 
        else if ( i==2 && j ==1)
        {
          cout<<" R ";
        }
        else if ( i==2 && j==2)
        {
          cout<<" R ";
        }
        else if ( i==2 && j==6)
        {
          cout<<" X ";
        }
        else if ( i==2 && j==7)
        {
          cout<<" X ";
        }
        else if ( i==3 && j==1)
        {
          cout<< " I ";
        }
        else if ( i==3 & j==3)
        {
          cout<<" E ";
        } 
        else if ( i==3 && j==5)
        {
          cout<<" X ";
        } 
        else if ( i==3 && j==7)
        {
          cout<<" G ";
        } 
        else if ( i==4 && j==1)
        {
          cout<<" M ";
        }
        else if ( i==4 && j==4)
        {
          cout<<" S ";
        } 
        else if ( i==4 && j==7)
        {
          cout<<" R ";
        }
        else if ( i==5 && j==1)
        {
          cout<<" A ";
        }
        else if ( i==5 && j==3)
        {
          cout<<" X ";
        } 
        else if ( i==5 && j==5)
        {
          cout<<" U ";
        } 
        else if ( i==5 && j==7)
        {
          cout<<" A ";
        } 
        else if ( i==6 && j==1)
        {
          cout<<" R ";
        }
        else if ( i==6 && j==2)
        {
          cout<<" X ";
        } 
        else if ( i==6 && j==6)
        {
          cout<<" M ";
        } 
        else if ( i==6 && j==7)
        {
          cout<<" D ";
        }
        else if ( i==7 && j==1)
        {
          cout<<" Y ";
        } 
        else if ( i==7 && j==2)
        {
          cout<<" I ";
        } 
        else if ( i==7 && j==3)
        {
          cout<<" E ";
        } 
        else if ( i==7 && j==4)
        {
          cout<<" L ";
        } 
        else if ( i==7 && j==5)
        {
          cout<<" D ";
        } 
        else if ( i==7 && j==6)
        {
          cout<<" X ";
        } 
        else if ( i==7 && j==7)
        {
          cout<<" E ";
        } 
        else
        {
          cout<<"   ";
        }


    }
    cout<<endl;
  } 
  cout<<endl;

  cout<<"Few HINTS :-"<<endl;

  cout<<"There is a word in a pattern which means -- to think that something is true even if you do not know for sure "<<endl;
    
  vector<string>v1 ={"YIELD","PRIMARY","PRESUME","PROMOTE","GRADE"};

  cout<<endl;

  vector<string>v2;

  string temp[5];

  cout<<"Enter your words below :-"<<endl;
  
  for ( int i = 0 ; i <5 ; i++){
    cin >> temp [i];
    v2.push_back(temp[i]);
  }
  cout<<endl;

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());

  vector<string> :: iterator it , st ,lt ;

  it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end() , v.begin() );

  cout<<endl;

  cout<<"WORDS YOU HAVE GUESSED CORECTLY :-"<<endl;

  for( st = v.begin(); st !=it ; st++){
    cout<<*st<<" " ;
  }

  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

  cout<<endl;

  cout<<"WORDS YOU COUDN'T GUESSED CORRECT :-"<<endl;

  for ( st = v.begin(); st != lt;st++){
    cout<<*st<<" ";
  }
  
 }
 void pattern6(){

  cout<<endl;
  cout<<"Intructions to be followed while playing :-"<<endl;

  cout<<"1.You have to find 7 random words from the pattern below."<<endl;

  cout<<"2.You have to press Enter everytime you done typing a word."<<endl;

   cout<<"3.Caps lock key must be on while typing words. "<<endl;

  cout<<endl;
  
    cout<<endl;
    for(int i =0 ; i<10;i++){
      for(int j=1 ;j<11;j++){
        if ( i==0 && j==5)
        {
          cout<<" X ";
        }
        else if ( i==0 && j==6)
        {
          cout<<" X ";
        }
        else if ( i==1 && j==4)
        {
          cout<<" W ";
        }
        else if ( i==1 && j==5)
        {
          cout<<" A ";
        }
        else if ( i==1 && j==6)
        {
          cout<<" S ";
        }
        else if ( i==1 && j==7)
        {
          cout<<" P ";
        }
        else if ( i==2 && j==3)
        {
          cout<<" A ";
        }
        else if ( i==2 && j==4)
        {
          cout<<" U ";
        }
        else if ( i==2 && j==5)
        {
          cout<<" D ";
        }
        else if ( i==2 && j==6)
        {
          cout<<" I ";
        }
        else if ( i==2 && j==7)
        {
          cout<<" T ";
        }
        else if ( i==2 && j==8)
        {
          cout<<" O ";
        }
        else if ( i==3 && j==2)
        {
          cout<<" X ";
        }
        else if ( i==3 && j==3)
        {
          cout<<" X ";
        }
        else if ( i==3 && j==4)
        {
          cout<<" C ";
        }
        else if ( i==3 && j==5)
        {
          cout<<" O ";
        }
        else if ( i==3 && j==6)
        {
          cout<<" M ";
        }
        else if ( i==3 && j==7)
        {
          cout<<" I ";
        }
        else if ( i==3 && j==8)
        {
          cout<<" C ";
        }
        else if ( i==3 && j==9)
        {
          cout<<" S ";
        }
        else if ( i==4 && j==1)
        {
          cout<<" A ";
        }
        else if ( i==4 && j==2)
        {
          cout<<" C ";
        }
        else if ( i==4 && j==3)
        {
          cout<<" C ";
        }
        else if ( i==4 && j==4)
        {
          cout<<" U ";
        }
        else if ( i==4 && j==5)
        {
          cout<<" M ";
        }
        else if ( i==4 && j==6)
        {
          cout<<" U ";
        }
        else if ( i==4 && j==7)
        {
          cout<<" L ";
        }
        else if ( i==4 && j==8)
        {
          cout<<" A ";
        }
        else if ( i==4 && j==9)
        {
          cout<<" T ";
        }
        else if ( i==4 && j==10)
        {
          cout<<" E ";
        }
        else if ( i==5 && j==5)
        {
          cout<<" A ";
        }
        else if ( i==5 && j==6)
        {
          cout<<" B ";
        }
        else if ( i==6 && j==5)
        {
          cout<<" I ";
        }
        else if ( i==6 && j==6)
        {
          cout<<" R ";
        }
        else if ( i==7 && j==5)
        {
          cout<<" N ";
        }
        else if ( i==7 && j==6)
        {
          cout<<" I ";
        }
        else if ( i==8 && j==5)
        {
          cout<<" X ";
        }
        else if ( i==8 && j==6)
        {
          cout<<" E ";
        }
        else if ( i==9 && j==5)
        {
          cout<<" X ";
        }
        else if ( i==9 && j==6)
        {
          cout<<" F ";
        }
        else
        {
          cout<<"   ";
        }
      }
      cout<<endl;
    }
  cout<<endl;

  cout<<"Few HINTS :-"<<endl;

  cout<<"There is a word in a pattern which means -- to sit or stand in a particular position for a painting, photograph, etc... "<<endl;

  cout<<"There is a word in a pattern which means -- is an unbiased examination and evaluation of the financial statements of an organization "<<endl;

  cout<<endl;
  vector<string>v1 = {"ACCUMLATE","POSE","WASP","DOMAIN","COMICS","BRIEF","AUDIT"};

  vector<string>v2;

  string temp[7];
  
  cout<<"Enter your words below :- "<<endl;

  for ( int i = 0 ; i <7 ; i++){
    cin >>temp[i];
    v2.push_back(temp[i]);
  }

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  vector<string>v(v1.size()+v2.size());

  vector<string> :: iterator it , st ,lt;

  it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end() , v.begin() );
  
  cout<<endl;

  cout << "WORDS YOU HAVE CORRECTLY GUESSED :-"<<endl;

  for ( st = v.begin(); st != it ; st++){
    cout<<*st<<" ";
  }

  cout<<endl;
  
  lt = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end() , v.begin() );

  cout<<endl;

  cout<<"WORDS YOU COULDN'T GUESSED :-"<<endl;

  for ( st = v.begin(); st != lt ; st++){
  cout<<*st<<" ";
  }


}
int main(){
int choice;

  do {
   
    cout<<endl;
    cout<<"Enter 1 to PLAY the game "<<endl;
    cout<<"Enter 2 to QUIT the game "<<endl;

    cout<<endl;

    cin >> choice;
    
    switch(choice){

      case 1 :
      cout<<endl;
      cout<<"Yey ! we are playing"<<endl;

      cout<<endl;

      srand(time(0));
  
    if ((rand()%6+1) ==1) 
    {
      pattern1();
      cout<<endl;
    }
    else if ( (rand()%6+1) ==2)
    {
      pattern2();
      cout<<endl;
    }
    else if ( (rand()%6+1) ==3)
    {
      pattern3();
      cout<<endl;
    }
    else if ( (rand()%6+1) ==4)
    {
      pattern4();
      cout<<endl;
    }
    else if ( (rand()%6+1) ==5)
    {
      pattern5();
      cout<<endl;
    }
    else if ( (rand()%6+1) ==6)
    {
      pattern6();
      cout<<endl;
    }

      break;

      case 2 :
      cout<<endl;
      cout<<"Thanks for playing"<<endl;
      return 0;

      default: 
      cout<<endl;
      cout << "Invalid input!" << endl;
      return 0;
    }
  }
  while(choice !=2);

  srand(time(0));
  
    if ((rand()%6+1) ==1) 
    {
      pattern1();
    }
    else if ( (rand()%6+1) ==2)
    {
      pattern2();
    }
    else if ( (rand()%6+1) ==3)
    {
      pattern3();
    }
    else if ( (rand()%6+1) ==4)
    {
      pattern4();
    }
    else if ( (rand()%6+1) ==5)
    {
      pattern5();
    }
    else if ( (rand()%6+1) ==6)
    {
      pattern6();
    }
      
  }


