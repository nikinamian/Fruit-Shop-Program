//
//  main.cpp
//  Fruit Shop Program
//
//  Created by Niki Namian on 11/20/24.
//

#include <iostream>

#include <string>

using namespace std;

//function declaration
int average (int array[]);
void printTopSell(string strArray[],int intArray[],int average);

int main()
{
    cout<<"Welcome to the fruit stand!\n";
    //implementing a string array
    string fruits[5]={"orange","mango","apple","pineapple","banana"};
    //implementing an int array
    int amountSold[5]={};
    
    cout<<"Please enter the amount of fruit sold\n";
    for (int i=0;i<5;i++){
        cout<< fruits[i]<<": ";
        cin>>amountSold[i];
    }
    //printing average sold
    int ave=average(amountSold);
    cout<<"An average sold is: "<<ave;
    //function call statement to print top selling fruit
    printTopSell(fruits,amountSold,ave);
    return 0;
}

//function calculating the average sold
int average(int array[]){
    int total = 0;
    for(int i=0; i<5;i++){
        total+=array[i];
    }
    return total/5;
}

//function calculating top selling items
void printTopSell(string strArray[],int intArray[],int average){
    int i=0;
    cout<<"\n*************Top Sold Fruits***********\n";
    while(i<5){
        if(intArray[i]>=average){
            cout<<strArray[i]<<": "<<intArray[i]<<"\n";
        }
        i+= 1;
    }
}

