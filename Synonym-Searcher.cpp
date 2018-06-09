#include<iostream>
#include<map>

using namespace std;

int main(){
    string ans;
    int co=0;
    bool keepgoing = true;
    map <string, string> search;
    string word;

    search["abide"]="comply with, obey, observe, follow, keep to, hold to, conform to, adhere to";
    search["although"]=" in spite of the fact that, despite the fact that, notwithstanding (the fact) that";
    search["car"]="automobile, motor vehicle, vehicle, motorcar, auto, wheels, gas guzzler, jalopy";
    search["automobile"]=" car, auto, wheels, jalopy, lemon, clunker, hooptie, Tin Lizzie, rustbucket, motorcar";
    search["schedule"]=" plan, program, timetable, scheme";
    search["description"]=" sort, variety, kind, type, category, order, breed, class, designation, specification";
    search["environment"]="habitat, territory, domain, surroundings, environs, conditions";
    search["forecast"]=" prediction, prophecy, forewarning, prognostication, augury, divination";
    search["predict"]=" forecast, foretell, foresee, prophesy, anticipate, tell in advance, envision";
    search["request"]=" appeal, entreaty, plea, petition, application, demand, call, adjuration, behest";
    search["omit"]=" leave out, exclude, leave off, fail to mention, miss, pass over, take out, drop";
    search["zone"]=" area, sector, section, belt, stretch, region, territory, district, quarter, precinct";


    while (keepgoing == true){
        cout<<"\t\t\t**********Synonym Searcher********"<<endl;
        cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<endl;
        cout << "Type the word you want to search: ";
        cin >> word;

        map <string, string>::iterator p=search.begin();
        while(p!=search.end()){
                if(p->first==word){
                    cout<<p->first<<"=>synonyms:";
                    cout<<p->second<<endl;
                    co=1;
                }
                p++;

        }
        if(co!=1){
            cout<<"\t Data not found!!!"<<endl;
        }
        cout << endl;
        cout << "Want to search more ??n to exit: ";
        cin >> ans;
        cout << endl;
        if (ans == "n") {
            keepgoing = false;
        }
    }
    return 0;
}
