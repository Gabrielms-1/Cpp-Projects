#ifndef GET_AND_SET_H_INCLUDED
#define GET_AND_SET_H_INCLUDED

using namespace std;

    class Airplane{
    public:
        int speed;
        int passengers;  
        int type;

        Airplane(int _type); 
        int get_maxSpeed();
        bool get_state();
        void set_state(int s);

    private:
        string name;
        int maxSpeed;
        string color;
        void set_maxSpeed(int _maxSpeed);
        bool state;
    };

void Airplane::set_maxSpeed(int _maxSpeed){
    maxSpeed = _maxSpeed;
}

int Airplane::get_maxSpeed(){
    return maxSpeed;
}    

bool Airplane::get_state(){
    return state;
}

void Airplane::set_state(int s){
    if (s == 1){
        state = 1;
    }
    else{
        state = 0;
    }
}

Airplane::Airplane(int _type){     //class::method
    if(_type == 1){
        name = "black bird";
        set_maxSpeed(800);
        set_state(1);
    }

    if(_type == 2){
        name = "boeing";
        set_maxSpeed(300);
        set_state(0);
    }

    else if(_type == 3){
        name = "jet";
        set_maxSpeed(500);
        set_state(1);
    }
}
#endif