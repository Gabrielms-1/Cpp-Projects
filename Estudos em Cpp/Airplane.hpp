#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED

using namespace std;

    class Airplane{
    public:
        string name;
        int speed;
        int maxSpeed;

        Airplane(int type);
        void print();

    private:
        
    };

    Airplane::Airplane(int type){
        if(type == 1){
            name = "Jet";
            maxSpeed = 800;
        }
        else if(type == 2){
            name = "Boeing";
            maxSpeed = 300;
        }
        else if(type == 3){
            name = "Plane";
            maxSpeed = 450;
        }
    }

    void Airplane::print(){
        cout << " - - - - " << endl;
        cout << "Type: " << name << endl;
        cout << "Speed: " << speed << endl;
        cout << "Max Speed: " << maxSpeed << endl;
    }

#endif