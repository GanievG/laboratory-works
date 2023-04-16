
#include "Header.h"

int main()
{
    setlocale(LC_ALL,"ru");
    
    vector<Car*> Cars;

    ifstream fin("CARS.txt");

    string split;

    if (!fin.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        cout << "OK" << endl;
        while (getline(fin, split))
        {
        
            unsigned short pos = split.find(' ');
        
            if (pos != string::npos)
            {
            
                string company = split.substr(0, pos);
                string model = split.substr(pos + 1);
            
                Car* car = nullptr;
        
                if (company == "Mercedes") 
                {
                    car = new Mercedes(company, model);
                }
            
                else if (company == "BMW") 
                {
                    car = new BMW(company, model);
                }
            
                if (car != nullptr)
                {
                    Cars.push_back(car);
                }
            }
        }

    }
    fin.close();

    for (Car* car : Cars) 
    {
        //cout << car->getModel() << endl;
        delete car;
    }

    system("pause");
    return 0;
}
    //string model;
    
    //ifstream fin;
    //string path = "CARS.txt";
    //fin.open(path);

    //if (!fin.is_open()) { cout << "error" << endl;}
    //else 
    //{
    //    cout << "ok" << endl;
    //    while (!fin.eof()) 
    //    {
    //        fin >> company >> model;
    //        //cout<<company<<' '<<model<<endl;
    //        CarInformation.emplace_back(company, model);
    //    }

    //}

    //fin.close();

