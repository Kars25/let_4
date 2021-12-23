#include <iostream>
#include <string>
using namespace std;

string Bool_translation(bool is_broken){
    if(is_broken) return "true";
    else return "false";
}
struct MobilePhone{
    double weight;
    bool is_broken;
    double price;

    MobilePhone(){
        weight = 0;
        is_broken = false;
        price = 0;
    };
    MobilePhone(double weight_, bool is_broken_, double price_){
        weight = weight_;
        is_broken = is_broken_;
        price = price_;
    };

};

int main(){
    int number_of_phones = 0;
    cin >> number_of_phones;
    MobilePhone phones[number_of_phones];
    for(int i = 0; i < number_of_phones; ++i){
        cin >> phones[i].weight;
        cin >> phones[i].is_broken;
        cin >> phones[i].price;
    }
    cout << "<MobilePhones>" << endl;
    for(int i = 0; i < number_of_phones; ++i){
        cout << "\t<MobilePhone id= \"" << i << "\" weight=\"" << phones[i].weight << "\" is_broken=\"" << Bool_translation(phones[i].is_broken) << "\" price=\"" << phones[i].price << "\"/>" << endl;
    }
    cout << "</MobilePhones>" << endl;
    return 0;
}