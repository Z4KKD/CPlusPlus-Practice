#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating \n";
        }
        void drink (){
            std::cout << "This person is drinking \n";
        }
        void sleep(){
            std::cout << "This person is sleeping \n";
        }
};

int main()
{
    Human human1;

    human1.name = "Rick";
    human1.occupation =  "scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    Human human2;
    
    human2.name = "Morty";
    human2.occupation =  "Student";
    human2.age = 15;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}