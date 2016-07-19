class CX
{
private:
    int a;
    int b;
public:
    CX() = default;
    CX(int a_, int b_):
        a(a_),b(b_)
    {}
    int get_a() const
    {
        return a;
    }
    int get_b() const
    {
        return b;
    }
    int foo() const
    {
        return a+b;
    }
};

/*
 *
 *
constexpr int square(int x) {
	return x * x;
}

int main() {

	int array[square(5)];

	int dummy = 4;
	int array2[square(dummy)];

	for (int i = 0; i < square(dummy); ++i) {
		array2[i] = i;
		cout << array2[i] << endl;
	}

	return 0;

}
 *
 *
 *
 * */
