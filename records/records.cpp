#include<iostream>
#include<string>
struct house
{
    /* data */
    std::string address;
    int year_built;
    int num_rooms;
    int num_garages;
    int num_baths;
    int lot_size;
    double price;
    double tax;
};

void qualify(house& my_house, double tax_rate){

    my_house.tax = my_house.price * tax_rate;
}


int main(){

    house my_house;
    my_house.address = "123 Main St";
    my_house.year_built = 2000;
    my_house.num_rooms = 3;
    my_house.num_garages = 1;
    my_house.num_baths = 2;
    my_house.lot_size = 1000;
    my_house.price = 1000000;
    // my_house.tax = 10000;

    // qualify(my_house, 0.05);
    // std::cout << my_house.address << std::endl;
    // std::cout << my_house.year_built << std::endl;
    // std::cout << my_house.num_rooms << std::endl;
    // std::cout << my_house.num_garages << std::endl;
    // std::cout << my_house.num_baths << std::endl;
    // std::cout << my_house.lot_size << std::endl;
    // std::cout << my_house.price << std::endl;
    // std::cout << my_house.tax << std::endl;

    // init multiple houses
    house my_house2 = { "456 Main St", 2000, 3, 3, 2, 1000, 100000, 10000 };
    house my_house3 = { "789 Main St", 2000, 3, 1, 2, 1000, 100000, 100 };

    // an array of houses (3 houses)
    // stucts in an array
    house houses[3] = { my_house, my_house2, my_house3 };
    
    for(int i = 0; i < 3; i++){
        qualify(houses[i], 0.05);
        std::cout << houses[i].address << std::endl;
        std::cout << houses[i].year_built << std::endl;
        std::cout << houses[i].num_rooms << std::endl;
        std::cout << houses[i].num_garages << std::endl;
        std::cout << houses[i].num_baths << std::endl;
        std::cout << houses[i].lot_size << std::endl;
        std::cout << houses[i].price << std::endl;
        std::cout << houses[i].tax << std::endl;
        std::cout << std::endl;
    }

    return 0;
}