#include<iostream>
template <class T>
int fun1(T x)
{
    std::cout<< "From normal dunction template Fun1() template "<< x << std::endl;
    return 0;
}
template<>
int fun1(char x)
{
    std::cout << "From specialized template "<< x << std::endl;
    return 0;
}
int main()
{
    fun1<char>('d');
    fun1<int>(32);
    fun1<float>(434.34);
    return 0;
}