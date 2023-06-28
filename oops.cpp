#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;
    Hero(){
        cout<<"Constructor Called"<<endl;
    }
    //Parameterised Constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;
    }
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    //object created statically
    Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh<<endl;
    ramesh.getHealth();
    
    //dynammically
    Hero *h = new Hero();
    
/*    
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;
    
    //dynammically allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<" health is "<<(*b).getHealth()<<endl;
    
    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;
*/    
/*    Creation of object
    Hero ramesh;
    cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;
    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    //ramesh.health = 70;
    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';
    
    cout<<"health is: "<<ramesh.getHealth()<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    */
    return 0;
}
