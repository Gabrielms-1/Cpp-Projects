#include <iostream>
#include <memory>

using namespace std;

class Car{
    public:
        int speed = 0;
        
        int get_speed(){
            return speed;
        }
        void set_speed(int _speed){
            this->speed = _speed;
        }
};


int main(){

    
    unique_ptr<string>str(new string("Gabriel Mendes"));
    cout << *str << " - size" << str->size() << endl;

    //the first pointer assumes the value of the second, 
    //since they are SHARED pointers 
    shared_ptr<Car>c1(new Car);
    shared_ptr<Car>c2 = c1;
    c1->set_speed(10);
    c2->set_speed(5);
    cout << "Car 1 Speed> " << c1->get_speed() << endl;
    cout << "Car 2 speed: " << c2->get_speed() << endl;

    return 0;
}