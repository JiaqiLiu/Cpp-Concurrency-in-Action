class X
{
private:
    int* data;
public:
    X():
        data(new int[1000000])
    {
    	std::cout << "Constructor" << std::endl;
    }
    ~X()
    {
        delete [] data;
    }
    X(const X& other):
        data(new int[1000000])
    {
    	std::cout << "Copy Constructor" << std::endl;
    	std::copy(other.data,other.data+1000000,data);
    }
    X(X&& other):
        data(other.data)
    {
    	std::cout << "Move Constructor" << std::endl;
        other.data=nullptr;
    }
};

/*

int main() {

	X x1;
	X x4 = x1;
	X x2 = std::move(x1);
	X x3 = static_cast<X&&>(x2);

	return 0;
}

*/
