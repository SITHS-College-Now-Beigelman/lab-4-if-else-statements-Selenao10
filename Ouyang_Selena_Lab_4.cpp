//Selena Ouyang
//Lab 4
//10-1-24

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()

{
    float grams; //gram of sugar in the fruit
    string name; //name of fruit
    int continuerunning; //user input of 1 for keep on running or 2 for no
    

    cout << "Enter fruit name" << endl; //prints direction to enter fruit name
    cin >> name; //user input of the name of the fruit 
    cout << "Enter number of grams of sugar that one cup." << endl; //prints direction to enter sugar content
    cin >> grams; //user input of grams of sugar

        //Prints out "LOW SUGAR FRUIT" if the gram of sugar is less than 10
        if ( grams < 10 )
            cout << name << " LOW SUGAR FRUIT"; 

        //Prints out "MEDIUM SUGAR FRUIT" if the gram of sugar is less than or equal to 14
        if( grams > 10 && grams <= 14)
            cout << name << " MEDIUM SUGAR FRUIT"; 

        //Prints out "HIGH SUGAR FRUIT" if the gram of sugar is more than 14
        if( grams > 14)
            cout << name << " HIGH SUGAR FRUIT";  


    //Asks user if they want to continue using the program
    cout << endl << "Continue using the program? Enter 1 for YES or 2 for NO" << endl; 
    cin >> continuerunning; //allows user to input 1 or 2 


    //while the user continues to input 1, the program keeps running
    while (continuerunning == 1)
    {
        cout << "Enter fruit name" << endl; //Prints
        cin >> name; //user input of the name of the fruit 
        cout << "Enter number of grams of sugar that one cup." << endl;
        cin >> grams; //user input of grams of sugar
        
        //Prints out "LOW SUGAR FRUIT" if the gram of sugar is less than 10
        if ( grams < 10 )
        cout << name << " LOW SUGAR FRUIT";

        //Prints out "MEDIUM SUGAR FRUIT" if the gram of sugar is less than or equal to 14
        if( grams > 10 && grams <= 14)
        cout << name << " MEDIUM SUGAR FRUIT";

        //Prints out "HIGH SUGAR FRUIT" if the gram of sugar is more than 14
        if( grams > 14)
        cout << name << " HIGH SUGAR FRUIT";  

        //Asks user if they want to continue using the program
        cout << endl << "Continue using the program? Enter 1 for YES or 2 for NO" << endl; 
        cin >> continuerunning; //allows user to input 1 or 2 
    }


}




/*
Enter fruit name
Grapes
Enter number of grams of sugar that one cup.
23.37 
Grapes HIGH SUGAR FRUIT
Continue using the progam? Enter 1 for YES or 2 for NO
1
Enter fruit name
avocado
Enter number of grams of sugar that one cup.
.99
avocado LOW SUGAR FRUIT
Continue using the program? Enter 1 for YES or 2 for NO
2
*/
