//Creator: Jaden Guidangen
//Date: July 20th 2024
#include <iostream>
#include <ctime>

using namespace std;

void draw(char *stars) {
    cout <<stars[0] << "\t\t" << stars[1]<< "\t\t" <<stars[2] << "\t\t" << stars[3]  << "\t\t"  <<stars[4]<< "\t\t" << stars[5] << "\t\t" << stars[6]<< "\t\t" <<stars[7] << "\t\t" << stars[8]  << "\t\t"  <<stars[9]<< "\n"; 
};

void populate(char *stars);

int main()
{
    char stars[10] = {' ', ' ', ' ', ' ', ' ',' ',' ',' ',' ',' '};
    
        while(true){
            populate(stars);
            
        }
        
    
    
    
    //draw(newstars);
}

int temp;
void populate(char *stars){
    
    
    

    
    srand(time(0));
    int rng;
    rng = rand() % 9;
    //prevent two zero indexes
    //9%9 & 0%9
    if (((rand()%9)==0) && (rand()!=0))
    {
        rng = 9;
    }
    //prevent immediate iteration from being same index
    //EX: 2%9 == 2 & 11%9 == 2
    if (temp%9 == rng%9)
    {
        rng+=2;
    }
    stars[rng]='*';
    draw(stars);
    //longer the time the more random
    _sleep(400);
    stars[rng] = ' ';
    temp = rng;
   
   
           
        
};



