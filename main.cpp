#include <iostream>
#include <string>
#include <map>
#include <stdio.h>

using namespace std;

int main() {
    int groupNumber, giventoNumber, money, counter = 0;
    string member[10];
    map<string,int> spend ;
    string name,numb;

    while (true){
        getline(cin, numb);
        groupNumber = atoi(numb.c_str());
        if(numb == ""){break;}

        for (int i = 0; i < groupNumber ; ++i) {
            cin >> name;
            member[i] = name;
            spend[name] = 0;
        }

        for (int j = 0; j < groupNumber; ++j) {

            cin >> name>> money >> giventoNumber;

            if(giventoNumber != 0){spend[name] += (int)money%giventoNumber;spend[name] -= money;}
            if(giventoNumber == 0 && money == 0){ continue;}

            if(giventoNumber > 0){
                for (int i = 0; i < giventoNumber ; ++i) {
                    cin >> name;
                    spend[name] += money / giventoNumber;}
            }
        }

        if (counter >= 1){ cout << endl;}

        for (int k = 0; k < groupNumber ; ++k) {
            cout << member[k] << " " << spend[member[k]] << endl;
        }
        counter++;
        getline(cin, name);
    }
    return 0;
}


