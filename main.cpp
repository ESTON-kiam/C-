#include <iostream>

using namespace std;

int main()
{
    int marks,total;
    cout << "Enter Marks:";
    cin>>marks;
if(marks>69 && marks<=100){cout<<"Your grade is A " <<   marks <<endl;}
else if(marks>59 && marks<=69) {cout<<"Your grade is B " <<   marks<<endl ;}
else if(marks>49 && marks<= 59) {cout<<"Your grade is C " <<   marks<<endl;}
else if(marks>39 && marks<=49) {cout<<"Your grade is D " <<   marks<<endl;}
else if(marks>=0 && marks<=39) {cout<<"Your grade is E " <<   marks<<endl;}
else{cout<<"You entered invalid marks " <<marks<<endl;}
int eng;
cout<<  "Enter marks:";
cin>>eng;
if(eng>69 && eng<=100){cout<<"Your grade is A " <<   eng <<endl;}
else if(eng>59 && eng<=69) {cout<<"Your grade is B " <<   eng<<endl ;}
else if(eng>49 && eng<= 59) {cout<<"Your grade is C " <<   eng<<endl;}
else if(eng>39 && eng<=49) {cout<<"Your grade is D " <<   eng<<endl;}
else if(eng>=0 && eng<=39) {cout<<"Your grade is E " <<   eng<<endl;}
else{cout<<"You entered invalid marks " <<eng<<endl;}
total=marks+eng;
cout<<"The sum is "<<total;
    return 0;
}
