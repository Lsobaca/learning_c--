#include<string>
#include<iostream>

class person
{
private:
    /* data */
    int age;
    double weight;
    std::string name;
public:
    person(std::string name, int age, double weight);
    std::string get_name(){return name;};
    int get_age(){return age;};
    double get_weight(){return weight;};
    ~person();

};

person::person(std::string name, int age, double weight)
{
    this->name = name;
    this->age = age;
    this->weight = weight;
}
person::~person()
{
    std::cout<<"destructor"<<std::endl;

}

int main(){
    person person1("saint", 20, 100);
    std::cout<<"person1 name is "<<person1.get_name()<<std::endl;
    std::cout<<"person1 age is "<<person1.get_age()<<std::endl;
    std::cout<<"person1 weight is "<<person1.get_weight()<<std::endl;

    return 0;
}