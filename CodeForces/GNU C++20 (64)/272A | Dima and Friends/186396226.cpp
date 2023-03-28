#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int no_of_friends;
    cin>>no_of_friends;
    int other_fingers = 0;
    for(int i = 1; i <= no_of_friends; i++){
        int finger_i;
        cin>>finger_i;
        other_fingers += finger_i;
    }
    int no_of_choices = 0, no_of_people = no_of_friends + 1;
    for(int dima_fingers = 1; dima_fingers <= 5; dima_fingers++){
        int total_fingers = other_fingers + dima_fingers;
        no_of_choices += (total_fingers%no_of_people != 1);
    }
    cout<<no_of_choices<<endl;
    return 0;
}