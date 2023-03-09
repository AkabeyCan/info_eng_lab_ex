#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    void set_index(int index) { // setter
        index_ = index;
    }
    int index() { // getter
        return index_;
    }
    void set_name (string n){
        name_ = n;
    }
    void set_surname (string s){
        surname_ = s;
    }
    void set_an (int an){
        an_ = an;
    }
    void display(){
        cout<<name_<<" "<<surname_<<endl<<" "<<an_<<" "<<index_<<endl;
        for(float element:grades_){
            cout<<element<<endl;
        }
    }
    void add_grade(float number){
        grades_.push_back(number);
    }
    float mean(){
        float sum = 0;
        for(float element:grades_){
            sum = sum + element;

        }
        return sum / grades_.size();


    }

private:
    int index_;
    string name_;
    string surname_;
    int an_;
    vector <float> grades_;
};

int main()
{

    Student a;
    a.set_name("asdf");
    a.add_grade(1);
    a.display();


    return 0;
}
