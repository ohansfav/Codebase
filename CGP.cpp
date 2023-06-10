#include <iostream>
#include <stdlib.h>

//BULIDNG A GPA CALCULATOR

using namespace std;

void gpa();

int main()
{
    cout << "----------- GPA CALCULATOR ----------" << endl;


void gpa();
   {
       int A = 5; //INITIALITING ALPHABETS TO NUMBERS//NOT WORKING YET THOU
       int B = 4;
       int C = 3;
       int D = 2;
       int E = 1;
       int F = 0;

    int q; // for the input
    cout<<"------------ GPA calculating ------------ "<<endl;
    cout<<" how many subjects do you want to calculate? : "; //THIS WOULD CREATE A TABLE FOR ALL THE SUBJECTS TO BE CALCULATED
    cin>>q;  //TAKES INPUT FROM THE USER


    float GRADE [q]; // TO CALCULATGE THE GRADE IN DECIMALS
    float point [q]; // TO CALCULATE THE POINTS IN DECIMALS

    cout<<endl;
    for(int i=0;i<q;i++) // IF DECISION, IF I IS ZERO THEN I IS LESS THAN Q AND I SHOULD BE ADDED BY ONE
    {
        //THIS IS FOR THE TOTAL SUBJECTS TO BE ADDED
        cout<<"Enter the Grade for the subject "<<i+1<<": ";
        cin>>GRADE [i]; //INPUT FROM THE USER FOR THE GRADE
        cout<<endl; // FOR SPACING
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i]; // THE USER POINT
        cout<<"-----------------------------------\n\n"<<endl; //THE END OF ONE OR MORE SUBJECT
    }

    //FOR THE GPA AND CGPA CALCULATION

    float sum=0; //to get sum in decimal
    float total; // grade multiply sum to get total
    for(int j=0;j<q;j++)
    {
        total=GRADE[j]*point[j];
        sum=sum+total;
    }

    float totalCredit=0; //
    for(int k=0;k<q;k++)
    {
        totalCredit=totalCredit+GRADE[k]; //SUM FOR ALL TOTAL CREDIT
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total GRADE: "<<totalCredit<<" .Total GPA: "<<sum/totalCredit<<" ."<<endl;



}

}

