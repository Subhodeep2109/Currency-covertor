//
//  main.cpp
//  currencyconvertor
//
//  Created by Subhodeep Mukherjee
//

#include <iostream>
using namespace std;


float convertor(){
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currLevel:
    cout<<"Enter currency1 Name"<<endl;
    cin>>currName1;
    cout<<"Enter currency1 Value"<<endl;
    cin>>currency1;
    switch(currName1){
        case 'D':
            currLevel1:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='d' || currName2=='D'){
                currency2=currency1*1;
            }
            else if(currName2=='R' || currName2=='r'){
                currency2=currency1*82;
            }
            else if(currName2=='E' || currName2=='e'){
                currency2=currency1*0.94;
            }
            else if(currName2=='P' || currName2=='p'){
                currency2=currency1*0.82;
            }
            else{
                cout<<"You have entered wrong value, please type again" <<endl;
                goto currLevel1;
            }
            break;

        case 'R':
            currLevel2:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='d' || currName2=='D'){
                currency2=currency1*0.012;
            }
            else if(currName2=='r' || currName2=='R'){
                currency2=currency1*1;
            }
            else if(currName2=='e' || currName2=='E'){
                currency2=currency1*0.011;
            }
            else if(currName2=='p' || currName2=='P'){
                currency2=currency1*0.010;
            }
            else{
                cout<<"You have entered wrong value, please type again" <<endl;
                goto currLevel2;
            }

            break;

        case 'E':
            currLevel3:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='D' || currName2=='d'){
                currency2=currency1*1.06;
            }
            else if(currName2=='r' || currName2=='R'){
                currency2=currency1*87.81;
            }
            else if(currName2=='e' || currName2=='E'){
                currency2=currency1*1;
            }
            else if(currName2=='p' || currName2=='P'){
                currency2=currency1*0.88;
            }
            else{
                cout<<"You have entered wrong value, please type again" <<endl;
                goto currLevel3;
            }

            break;

        case 'P':
            currLevel4:
            cout<<"Enter currency2 Name"<<endl;
            cin>>currName2;
            if(currName2=='D' || currName2=='d'){
                currency2=currency1*1.21;
            }
            else if(currName2=='R' || currName2=='r'){
                currency2=currency1*100.15;
            }
            else if(currName2=='e' || currName2=='E'){
                currency2=currency1*1.14;
            }
            else if(currName2=='p' || currName2=='P'){
                currency2=currency1*1;
            }
            else{
                cout<<"You have entered wrong value, please type again" <<endl;
                goto currLevel4;
            }

            break;

        default:{
                cout<<"You have entered wrong value, please type again" <<endl;
                goto currLevel;
                break;
        }
    }

    return currency2;
}

int main(int argc, const char * argv[]) {
    char ch;
    cout<<"------------------------Welcome to the currency convertor-----------------------"<<endl;
    cout<<"You can use currencies i.e Ruppes, Dollars, euro, pound"<<endl;
    cout<<"Use R for rupees\nD for Dollar\nE for Euro and P for Pound"<<endl;
    cout<<"Enter currency you want to convert"<<endl;
    cout<<"Enter value of the currency"<<endl;
    cout<<"Enter currency in which you want to convert"<<endl;
    cout<<"R-->Rupees\tD-->Dollars\tE-->Euro\tp-->Pound"<<endl;
    cout<<"Press s to start"<<endl;
    pom:
    cin>>ch;
    if(ch=='s'||ch=='S')
    {
        float res=convertor();
        cout<<"Value is: "<<res;
    }
    else{
        cout<<"You have entered wrong value"<<endl;
        cout<<"Please type s"<<endl;
        goto pom;
    }
    return 0;
}