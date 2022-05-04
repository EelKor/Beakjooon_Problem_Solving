#include<iostream>
#include<string>
#include<sstream>
#include<vector>
 
using namespace std;
 
int main()
{
    string input;
    istringstream ss;
    string stringBuffer;
    vector<int> tnow;
    vector<int> tmission;
    int nowtime, missiontime;
    int timedelta;
    int result[3];

    cin >> input;
    ss.str(input);
    while (getline(ss, stringBuffer, ':'))
    {   
        tnow.push_back(stoi(stringBuffer));
    }

    ss.clear();
    input.clear();
    stringBuffer.clear();

    cin >> input;
    ss.str(input);
    while(getline(ss, stringBuffer, ':'))
    {
        tmission.push_back(stoi(stringBuffer));
    }

    nowtime = 3600 * tnow[0] + 60 * tnow[1] + tnow[2];
    missiontime = 3600 * tmission[0] + 60*tmission[1] + tmission[2];

    timedelta = missiontime - nowtime;
    if(timedelta < 0)
    {
        result[0] = (86400+timedelta)/3600;
        result[1] = (86400+timedelta)%3600/60;
        result[2] = (86400+timedelta)%60;
    }
    else
    {
        result[0] = (timedelta)/3600;
        result[1] = (timedelta)%3600/60;
        result[2] = (timedelta)%60;
    }

    for (int i = 0; i < 3; i++)
    {
        if(result[i] < 10) cout << "0" << result[i];
        else cout << result[i];
        if(i < 2) cout << ":";
    }
    
    return 0;
}