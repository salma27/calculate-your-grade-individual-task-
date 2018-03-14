#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    float score,stotal=0,total,outof=0,percentage;
    cout<<"how many exercises to input?";
    cin>>num;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"please enter a valid input:";
        cin>>num;
    }
    for(int i=1;i<=num;i++){
        cout<<"score received for exercise "<<i<<":";
        cin>>score;
         while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"please enter a valid input:";
        cin>>score;
    }
        stotal+=score;
        cout<<"total points possible for exercise "<<i<<":";
        cin>>total;
        while(total<score){
            cout<<"please enter a valid input:";
            cin>>total;
        }
         while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"please enter a valid input:";
        cin>>total;
    }
        outof+=total;

    }
    percentage=(stotal/outof)*100;
    cout<<"your total is "<<stotal<<" out of "<<outof<<", or "<<fixed<<setprecision(2)<<percentage<<"%.";




    return 0;
}
