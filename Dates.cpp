#include<iostream>
#include <string>

#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>dates;
    while(n--)
    {
        string date;
        cin >> date;

        string temp = "00.00.0000";
        if( temp.size() == date.size())
        {
            if(date[2] == '.')
            {
                cout << date << " ";
                date[2] = date[5] = '/';
                swap(date[0], date[3]);
                swap(date[1], date[4]);
                cout << date << endl;
            }

            else if( date[2] == '/')
            {
                cout << date << " ";
                date[2] = date[5] = '.';
                swap(date[0], date[3]);
                swap(date[1], date[4]);
                cout << date << endl;
            }

        }
        else
        {
            if((date[2] == '.' || date[2] == '/')  && (date[5] != '.' || date[5] != '/'))
            {
                string d="";
                d.push_back(date[0]);
                d.push_back(date[1]);
                d.push_back(date[2]);
                d.push_back('0');
                for(int i = 3; i < date.size(); i++)
                {
                    d.push_back(date[i]);
                }

                date = d;

                int c=0;
                    int i = n-1;
                    while(date[i] != '.')
                    {
                        c++;
                        i--;
                    }
                    if(c != 4)
                    {
                        for(int i = 0; i < 4-c; i++)
                        {
                            date.push_back('0');
                        }
                        swap(date[date.size()-2],date[date.size()-1]);
                        swap(date[date.size()-3],date[date.size()-2]);
                        swap(date[date.size()-4],date[date.size()-3]);
                    }

                if(date[2] == '.')
                {
                    cout << date << " ";
                    date[2] = date[5] = '/';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }

                else if( date[2] == '/')
                {
                    cout << date << " ";
                    date[2] = date[5] = '.';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }

            }
            else
            {
                if(date[4] == '.' || date[4] == '/')
                {
                    string d="";
                    d.push_back('0');
                    for(int i = 0; i < date.size(); i++)
                    {
                        d.push_back(date[i]);
                    }
                date = d;

                int c=0;
                    int i = n-1;
                    while(date[i] != '.')
                    {
                        c++;
                        i--;
                    }
                    if(c != 4)
                    {
                        for(int i = 0; i < 4-c; i++)
                        {
                            date.push_back('0');
                        }
                        swap(date[date.size()-2],date[date.size()-1]);
                        swap(date[date.size()-3],date[date.size()-2]);
                        swap(date[date.size()-4],date[date.size()-3]);
                    }

                if(date[2] == '.')
                {
                    cout << date << " ";
                    date[2] = date[5] = '/';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }

                else if( date[2] == '/')
                {
                    cout << date << " ";
                    date[2] = date[5] = '.';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }

                }
                else
                {
                    string d="";
                    d.push_back('0');
                    d.push_back(date[0]);
                    d.push_back(date[1]);
                    d.push_back('0');
                    d.push_back(date[2]);
                    d.push_back(date[3]);
                    for(int i = 4;i < date.size();i++)
                    {
                        d.push_back(date[i]);
                    }
                date = d;

                if(date[2] == '.')
                {
                    int c=0;
                    int i = n-1;
                    while(date[i] != '.')
                    {
                        c++;
                        i--;
                    }
                    if(c != 4)
                    {
                        for(int i = 0; i < 4-c; i++)
                        {
                            date.push_back('0');
                        }
                        swap(date[date.size()-2],date[date.size()-1]);
                        swap(date[date.size()-3],date[date.size()-2]);
                        swap(date[date.size()-4],date[date.size()-3]);
                    }
                    cout << date << " ";
                    date[2] = date[5] = '/';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }

                else if( date[2] == '/')
                {
                    int c=0;
                    int i = n-1;
                    while(date[i] != '.')
                    {
                        c++;
                        i--;
                    }
                    if(c != 4)
                    {
                        for(int i = 0; i < 4-c; i++)
                        {
                            date.push_back('0');
                        }
                        swap(date[date.size()-2],date[date.size()-1]);
                        swap(date[date.size()-3],date[date.size()-2]);
                        swap(date[date.size()-4],date[date.size()-3]);
                    }

                    cout << date << " ";
                    date[2] = date[5] = '.';
                    swap(date[0], date[3]);
                    swap(date[1], date[4]);
                    cout << date << endl;
                }


                }
            }
        }
        
    }

    

    return 0;
}