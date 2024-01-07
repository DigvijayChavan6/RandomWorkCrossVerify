#include<iostream>
#include<map>
using namespace std;

int get_Total_holidays(string day,int total_day){
    map<string,int> week={
        {"monday",1},{"tuesday",2},{"wednesday",3},{"thursday",4},
        {"friday",5},{"saturday",6},{"sunday",7}
    };
    total_day=total_day - (week["sunday"]-week[day]);
    if(total_day<0)return 0;
    return (total_day/week["sunday"])+1;
}

int main(){
    string day;
    int total_day;
    cout<<"Enter month start day:"<<endl;
    cin>>day;
    cout<<"Enter number of days:"<<endl;
    cin>>total_day;
    cout<<"Total holiday's are "<<get_Total_holidays(day,total_day);
    return 0;
}