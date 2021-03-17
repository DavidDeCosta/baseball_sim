/*
    This program simulates the outcome of an at bat in a baseball game
*/
//Programmer: <David DeCosta>
//Date of last modification : <16 March 2021>

#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h> //for srand(), rand()

using namespace std;

//prototypes
void createColumns();
int* generateRandomValue();
void experimentalCalc(int *count);
void theoreticalPercentage(int *count);
void percentError(int *count);
void displayCount(int*count);

int main(){

    int *count = generateRandomValue(); //pointer to values in the array count
    createColumns(); //creates the columns

    
    cout << "Strike out: " <<setw(12) << count[0] << setw(23) << count[0]/10000.0 * 100 << setw(17) << .20*100 << setw(16) << (count[0]/10000.0 *100 -  .20 * 100)/ (.20 * 100) *100 <<endl
    << "Ground out: " << setw(12) <<count [1] << setw(23) << count[1]/10000.0 * 200 << setw(17) << .2450*200 << setw(16) << (count[1]/10000.0 *100 -  .2450 * 100)/ (.2450 * 100) *100 <<endl 
    << "Fly out: " << setw(15) <<count[2] << setw(23) << count[2]/10000.0 * 100 << setw(17) << .28*100 <<setw(16) << (count[2]/10000.0 *100 -  .28 * 100)/ (.28 * 100) *100 <<endl 
    << "Fielding error: " <<setw(8) <<count[3] << setw(23) << count[3]/10000.0 * 100 << setw(17) << .01*100<<setw(16) << (count[3]/10000.0 *100 -  .01 * 100)/ (.01 * 100) *100   << endl 
    << "Walk: "<< setw(18) <<count[4] << setw(23) << count[4]/10000.0 * 100 << setw(17) << .08*100 <<setw(16) << (count[4]/10000.0 *100 -  .08 * 100)/ (.08 * 100) *100   <<endl 
    << "Single: " << setw(16) <<count[5] << setw(23) << count[5]/10000.0 * 100 << setw(17) << .105*100 <<setw(16) << (count[5]/10000.0 *100 -  .105 * 100)/ (.105 * 100) *100   <<endl 
    << "Double: " << setw(16) <<count[6] << setw(23) << count[6]/10000.0 * 100 << setw(17) << .04*100 <<setw(16) << (count[6]/10000.0 *100 -  .04 * 100)/ (.04 * 100) *100   <<endl 
    << "Tiple: " << setw(17) <<count[7] << setw(23) << count[7]/10000.0 * 100 << setw(17) << .005*100 <<setw(16) << (count[7]/10000.0 *100 -  .005 * 100)/ (.005 * 100) *100  <<endl 
    << "Home Run: " << setw(14) <<count[8] << setw(23) << count[8]/10000.0 * 100 << setw(17) << .035*100 <<setw(16) << (count[8]/10000.0 *100 -  .035 * 100)/ (.035 * 100) *100  <<endl 
    << endl <<endl;

    //experimentalCalc(count);
    //theoreticalPercentage(count);
    //percentError(count);
    //displayCount(count);


    return 0;
}

//this fuction creates the columns
void createColumns(){
    cout.setf(ios::showpoint|ios::fixed);
    cout << setprecision(2);
    cout << endl;
    cout << setw(24) << "Number of" << setw(26) << "Experimental" << setw(18) << "Theoretical" << setw(14) << "% error" <<endl;
    cout << setw(29) << "Times Selected" << setw(19) << "percentage" << setw(19) << "percentage" << endl;
    cout << setw(29) << "--------------" << setw(19) << "----------" << setw(19) << "----------" << setw(14) << "------"<<endl;
}

// this fuction calculates the experimental value
void experimentalCalc(int *count){

    for(int i = 0; i < 9; i++){
            cout << setw(20) << count[i]/10000.0 * 100 << endl;
    }
}

//this fuction calculates the theoretical perecentage
void theoreticalPercentage(int *count){

    for(int i = 0; i < 9;i++){
        if(count[i] == count[0]){
            cout << .20*100 << endl;
        }
        else if(count[i] == count[1]){
            cout << .2450*200 << endl;
        }
        else if(count[i] == count[2]){
            cout << .28*100 <<endl;
        }
        else if(count[i] == count[3]){
            cout <<  .01*100<<endl;
        }
        else if(count[i] == count[4]){
            cout <<  .08*100 <<endl;
        }
        else if(count[i] == count[5]){
            cout <<  .105*100 <<endl;
        }
        else if(count[i] == count[6]){
            cout << .04*100 <<endl;
        }
        else if(count[i] == count[7]){
            cout <<  .005*100 <<endl;
        }
        else if(count[i] == count[8]){
            cout << .035*100 <<endl;
        }
        else{
            cout << "IDK";
        }
    }
}

//this function calculates the percent error
void percentError(int *count){
        for(int i = 0; i < 9;i++){
        if(count[i] == count[0]){
            cout <<  (count[0]/10000.0 *100 -  .20 * 100)/ (.20 * 100) *100  << endl;
        }
        else if(count[i] == count[1]){
            cout <<  (count[1]/10000.0 *100 -  .2450 * 100)/ (.2450 * 100) *100 << endl;
        }
        else if(count[i] == count[2]){
            cout << (count[2]/10000.0 *100 -  .28 * 100)/ (.28 * 100) *100 <<endl;
        }
        else if(count[i] == count[3]){
            cout << (count[3]/10000.0 *100 -  .01 * 100)/ (.01 * 100) *100   <<endl;
        }
        else if(count[i] == count[4]){
            cout << (count[4]/10000.0 *100 -  .08 * 100)/ (.08 * 100) *100   <<endl;
        }
        else if(count[i] == count[5]){
            cout << (count[5]/10000.0 *100 -  .105 * 100)/ (.105 * 100) *100   <<endl;
        }
        else if(count[i] == count[6]){
            cout << (count[6]/10000.0 *100 -  .04 * 100)/ (.04 * 100) *100   <<endl;
        }
        else if(count[i] == count[7]){
            cout << (count[7]/10000.0 *100 -  .005 * 100)/ (.005 * 100) *100  <<endl;
        }
        else if(count[i] == count[8]){
            cout << (count[8]/10000.0 *100 -  .035 * 100)/ (.035 * 100) *100  <<endl;
        }
        else{
            cout << "IDK";
        }
    }
}

//this function displays the number of times an outcome of an at bat occured
void displayCount(int*count){
    for(int i = 0;i < 9;i++){
        cout << count[i] << endl;
    }
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