#include <thread>
#include <iostream>
#include <unistd.h>

using namespace std;

void do_something(int& i)
{
    ++i;
    cout << "i:  " << i << endl;
}

struct func
{
    int& i;

    func(int& i_):i(i_){}

    void operator()()
    {
        for(unsigned j=0;j<1000000;++j)
        {
            do_something(i);
        }
    }
};

void oops()
{
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    usleep(1e3);
    my_thread.detach();
}

int main()
{
    cout << "Start" << endl;
    oops();
    cout << "Finished..." << endl;
    usleep(1e3);
}
