// #include <iostream>
// class person
// {
// public:
//     int pub = 10;

// protected:
//     int pro = 20;

// private:
//     int pri = 30;

// public:
//     void a()
//     {
//         std::cout << pro << std::endl;
//     }
// };
// class me : public person
// {
// public:
//     int mpub = pro;
//     void method()
//     {
//         pub = 20;
//         pro = 20;
//         pri = 20;
//         // pri = 20;
//     }
// };

// int main()
// {
//     me p1;
//     // p1.a();
//     me p2;
//     p1.pub = 20;
//     p1.pro = 20;
//     p1.pri = 20;
// }


// #include <iostream>
// class person
// {
// public:
//     int pub = 10;

// protected:
//     int pro = 20;

// private:
//     int pri = 30;

// public:
//     void a()
//     {
//         std::cout << pro << std::endl;
//     }
// };
// class me : protected person
// {
// public:
//     int mpub = pro;
//     void method()
//     {
//         pub = 20;
//         pro = 20;
//         pri = 20;
//         // pri = 20;
//     }
// };

// int main()
// {
//     me p1;
//     // p1.a();
//     me p2;
//     p1.pub = 20;
//     p1.pro = 20;
//     p1.pri = 20;
// }

#include <iostream>
class person
{
public:
    int pub = 10;

protected:
    int pro = 20;

private:
    int pri = 30;

public:
    void a()
    {
        std::cout << pro << std::endl;
    }
};
class me : private person
{
public:
    int mpub = pro;
    void method()
    {
        pub = 20;
        pro = 20;
        // pri = 20;
        // pri = 20;
    }
};

int main()
{
    me p1;
    // p1.a();
    // me p2;
    // p1.pub = 20;
    // p1.pro = 20;
    // p1.pri = 20;
    p1.method();
}