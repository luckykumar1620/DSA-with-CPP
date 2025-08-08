// #include<iostream>
// using namespace std;
// class car{
//     string name;
//     string colour;
//     public:
//     car(){
//         cout<<"constructor without parameratized "<<endl;
//     }
//     // car(string namecar,string colourcar){
//     //     cout<<"constructor with parametized\n";
//     //     name=namecar;
//     //     colour=colourcar;
//        car(string name,string colour){
//         cout<<"constructor with parametized\n";
//        this-> name=name;
//       this->  colour=colour;
//     }
//     void start(){
//         cout<<"car started\n";
//     }
//     void stop(){
//         cout<<"car stopped\n";
//     }
//     string getname(){
//         return name;
//     }
// };
// int main(){
//     car c1;
//     car c2("kia sonnet","balck");
//     cout<<"car name="<<c2.getname()<<endl;
// }

//practise question
// #include<iostream>
// using namespace std;
// class user{
//     int id;
//     string password;
//     public:
//     string username;
//     user(int id){
//         this->id=id;
//     }
//     //getters
//     string getpassword(){
//         return password;
//     }
//     //setters
//     void setpassword(string password){
//         this->password=password;
//     }
// };
// int main(){
//     user user1(101);
//     user1.setpassword("luckykumar");
//     user1.username="apna college";
//     cout<<"user name = "<<user1.username<<endl;
//     cout<<"password = "<<user1.getpassword()<<endl;
// }

//copy consturctor
// #include<iostream>
// using namespace std;
// class car{
//     public:
//     string name;
//     stringclass colour;
//     int *mileage;
//     car(string name,string colour){
//         this->name=name;
//         this->colour=colour;
//         mileage=new int;
//         *mileage=12;
//     }
//     //custom  copy constructor
//     car(car &original){
//         cout<<"this is new copy constructor...\n";
//         name=original.name;
//         colour=original.colour;
//         mileage=new int;    //deep copy constructor
//         *mileage=*original.mileage;
//     }
//     ~car(){
//         cout<<"deleting object\n";
//         if (mileage!=NULL)
//         {
//             delete mileage;
//             mileage =NULL;
//         }
        
//     }
// };
// int main(){
//     car c1("kia sonnnet","black");
//     car c2(c1);
//     cout<<c2.name<<endl;
//     cout<<c2.colour<<endl;
//      cout<<*c1.mileage<<endl;
//     // *c2.mileage=10;
//     // cout<<*c1.mileage<<endl;
//    // cout<<*c2.mileage<<endl;
//     return 0;
// }

//inheritance
// #include<iostream>
// #include<string>
// using namespace std;
// class animal{
//     public:
//     string colour;
//     void eat(){
//         cout<<"eat\n";
//     }
//     void breathe(){
//         cout<<"breathe\n";
//     }
// };
// //  class fish:public animal{
// //     class fish:protected animal{
//     public:
//     int fins;
//     void swim(){
//         eat();
//         cout<<"swim\n";
//     }
// };
// int main(){
//     fish f1;
//     f1.fins=3;
//     cout<<f1.fins<<endl;
//     f1.swim();
//     // f1.eat();
//     // f1.breathe();
// }

//multiple level ineheritance
// #include<iostream>
// #include<string>
// using namespace std;
// class animal{
//     public:
//     void eat(){
//         cout<<"eat\n";
//     }
//     void breathe(){
//         cout<<"breathe\n";
//     }
// };
// class mammal:public animal{
//     public:
//     string bloodtype;
//     mammal(){
//         bloodtype="warm";
//     }
// };
// class dog:public mammal{
//     public:
//     void tailwag(){
//         cout<<"a dog wags its tail\n";
//     }
// };
// int main(){
//     dog d1;
//     d1.eat();
//     d1.breathe();
//     d1.tailwag();
//     cout<<d1.bloodtype;
// }

//multiple inheritance
// #include<iostream>
// #include<string>
// using namespace std;
// class teacher{
//     public:
//     int salary;
//     string subject;
// };
// class student{
//     public:
//     int rollno;
//     float cgpa;
// };
// class ta:public teacher,public student{
//     public:
//     string name;
// };
// int main(){
//     ta t1;
//     t1.name="sharadha didi";
//     t1.subject="c++";
//     t1.cgpa=9;
//     cout<<t1.name<<endl;
//      cout<<t1.subject<<endl;
//       cout<<t1.cgpa<<endl;
// }

//polymerphism
// #include<iostream>
// #include<string>
// using namespace std;
// class print{
//     public:
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }
//     void show(string str){
//         cout<<"string: "<<str;
//     }
// };
//  class complex{
//         int real;
//         int img;
//         public:
//         complex(int r,int i){
//             real=r;
//             img=i;
//         }
//         void shownum(){
//             cout<<real<<"+i"<<img<<endl;
//         }
//         //operator overloading
//         complex operator+(complex &c2){
//             int resReal=this->real+c2.real;
//             int resImg=this->img+c2.img;
//             complex c3(resReal,resImg);
//             return c3;
//             // cout<<"res: ";
//             // c3.shownum();
//         }
//     };
// int main(){
//     // print p1;
//     // p1.show(23);
//     // p1.show("lucky");
//     complex c1(1,2);
//     complex c2(3,4);
//     c1.shownum();
//     c2.shownum();
//     complex c3=c1+c2;
//     c3.shownum();
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class parent{
//     public:
//     void show(){
//         cout<<"parent class show...\n";
//     }
//     virtual void hello(){
//         cout<<"parent hello...\n";
//     }
// };
// class child:public parent{
//     public:
//     void show(){
//         cout<<"child class show...\n";
//     }
//      virtual void hello(){
//         cout<<"child hello...\n";
//     }
// };
// int main(){
//      child child1;
//     // c1.show();
//     parent *ptr;
//     ptr=&child1;
//     ptr->hello();
// }

//abstraction
// #include<iostream>
// #include<string>
// using namespace std;
// class shape{
//     public:
//     virtual void draw()=0;//abst fnx,pure virtual fnx
//     };
//     class circle:public shape{
//         public:
//         void draw(){
//             cout<<"circle..\n";
//         }
//     };
//     class square:public shape{
//         public:
//         void draw(){
//             cout<<"square..\n";
//         }
//     };
//     int main(){
//         circle cir1;
//         cir1.draw();
//         square sq1;
//         sq1.draw();
//     }

// #include<iostream>
// #include<string>
// using namespace std;
// class example{
//     public:
//  static  int x;
// };
// int example::x=0;
// int main(){
//     example eg1;
//     example eg2;
//     example eg3;
//     cout<<eg1.x++<<endl;
//      cout<<eg2.x++<<endl;
//       cout<<eg3.x++<<endl;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class example{
//     public:
//    example(){
//     cout<<"constructor..\n";
//    }
//    ~example(){
//     cout<<"destructor..\n";
//    }
// };

// int main(){
//     int x=0;
//     if (x==0)
//     {
//        static example eg1;
//     }
//     cout<<"code ending..\n";
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
class a{
    string secret="secret data";
    friend class b;
   friend   void revealsecret(a &obj1);
};
class b{
    public:
    void showsecret(a &obj1){
        cout<<obj1.secret;
    }
};
void revealsecret(a &obj1){
    cout<<obj1.secret;
}
int main(){
    a a1;
    b b1;
    b1.showsecret(a1);
    return 0;
}