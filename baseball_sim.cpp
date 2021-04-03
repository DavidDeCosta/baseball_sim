/*
    This program simulates the outcome of an at bat in a baseball game
*/
//Programmer: <David DeCosta>
//Date of last modification : <18 March 2021>

#include <iostream>
#include <iomanip>
#include <time.h> //used to seed srand with time NULL
#include <stdlib.h> //for srand(), rand()

using namespace std;

//prototypes
void createColumns();
int* generateRandomValue();

int main(){

    string labels[9] = {"Stike out: ", "Ground out: ", "Fly out: ", "Fielding error: ", "Walk: ", "Single: ", "Double: ", "Triple: ", "Home run: "};
    float percentage[9] = {.20,.2450,.28,.01,.08,.105,.04,.005,.035}; //an array of floating points used to calculate the Theoretical and % error
    int *count = generateRandomValue(); //pointer to values in the array count
    createColumns(); //creates the columns

    //this loop displays the labels and calculations
    for(int k = 0; k < 9; k++){
        cout << setw(16) << labels[k]
             << setw(8) << count[k]
             << setw(23) << count[k]/100.0
             << setw(23) << percentage[k] *100
             << setw(23) << (count[k]/100.0 - percentage[k] * 100)/(percentage[k] * 100) *100
             << endl;
    }
    
    return 0;
}

//this fuction creates the columns
void createColumns(){
    cout.setf(ios::showpoint|ios::fixed);
    cout << setprecision(2);
    cout << endl;
    cout << setw(25) << "Number of" << setw(26) << "Experimental" << setw(23) << "Theoretical" << setw(21) << "% error" <<endl;
    cout << setw(30) << "Times Selected" << setw(19) << "percentage" << setw(24) << "percentage" << endl;
    cout << setw(30) << "--------------" << setw(19) << "----------" << setw(24) << "----------" << setw(21) << "------"<<endl;
}

//this function generates a random value then increments the index of the array it falls into
int* generateRandomValue(){
    static int count[9] = {0};
    srand((unsigned)time(NULL));

    for(int i=0;i <10000;i++){
        int num = rand()%200 +1;
        if(num <=40){
            count[0]++;
        }
        else if(num <=89){
            count[1]++;
        }
        else if(num <= 145){
            count[2]++;
        }
        else if(num <=147){
            count[3]++;
        }
        else if(num<=163){
            count[4]++;
        }
        else if(num<=184){
            count[5]++;
        }
        else if(num<=192){
            count[6]++;
        }
        else if(num<=193){
            count[7]++;
        }
        else if(num<=200){
            count[8]++;
        }
    }
    return count;
}