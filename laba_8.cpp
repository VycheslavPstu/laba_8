#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


struct stadion
{
    string name;
    int year_of_building;
    int amount_of_platforms;
    string type_of_sport;
};


int main()
{
    ofstream out("f1.txt", ios::app);
    int year;
    printf("Год: ");
    scanf("%i", &year);
    vector <stadion> stadions = {{"AA", 2001, 4, "футбол"}, {"BB", 2002, 5, "баскетбол"}, {"CC", 2003, 6, "волейбол"}, {"DD", 2004, 7, "хоккей"}};
    for (int i = 0; i < stadions.size(); i++)
    {
        if (stadions[i].year_of_building >= year)
        {
            printf("Название: %s; Год постройки: %i; Количество площадок: %i; Виды спорта: %s\n", stadions[i].name.c_str(), stadions[i].year_of_building, stadions[i].amount_of_platforms, stadions[i].type_of_sport.c_str());
            out << stadions[i].name.c_str() << stadions[i].year_of_building << stadions[i].amount_of_platforms << stadions[i].type_of_sport.c_str() << "\n";
            
    }   }
    
    
    out.close();
    return 0;
}
