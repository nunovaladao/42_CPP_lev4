#include <iostream>
#include <string>

class Person
{
    private:
        std::string name;
        int age;
        std::string personal_secret;

    public:

        Person(std::string Name, int Age, std::string Secret)
        {
            name = Name;
            age = Age;
            personal_secret = Secret;
        }

        void getInfo()
        {
            std::cout << name << "\n";
            std::cout << "The age is " << age << "\n";
            std::cout << "The secret is " << personal_secret << "\n";
        }

        std::string getter()
        {
            return personal_secret;
        }

        void setter(std::string secret)
        {
            personal_secret = secret;
        }
};

class Nuno: public Person
{
    private:
        std::string address;
        
    public:
        Nuno(std::string Name, int Age, std::string Secret, std::string Address): Person(Name, Age, Secret)
        {
            address = Address;
        }
        void print_Adress()
        {
            std::cout << "The address is " << address << "\n";
        }
};

int main()
{
    Nuno nuno("Nuno", 23, "I'm nice!", "Rua Manuel Salgueiral");
    nuno.getInfo();
    nuno.print_Adress();
    return 0;
}
