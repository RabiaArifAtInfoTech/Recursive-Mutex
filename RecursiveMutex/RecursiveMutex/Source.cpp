//////Making a deadLock situation
//
//#include<iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
//std::mutex mutex1;
//
//void f1();
//void f2();
//void f3();
//
//void f1() {
//	/// <summary>
//	/// Unhandled exception at 0x00007FFF0D29CD29 in RecursiveMutex.exe: Microsoft """C++ exception: std::system_error at memory location 0x00000071137FF088.""""
//	///            exception when f1 is called for 2nd time.
//	/// </summary>
//	mutex1.lock();
//	std::cout << "\nWe are inside Fun1";
//
//	f2();
//
//	std::cout << "\ninside f1";
//	mutex1.unlock();
//}
//
//void f2() {
//	std::cout << "\nWe are inside Fun2";
//
//	f3();
//
//	std::cout << "\ninside f2";
//}
//
//void f3() {
//	std::cout << "\nWe are inside Fun3";
//
//	f1();
//
//	std::cout << "\ninside f3";
//}
//
//int main()
//{
//	std::cout << "\nWe are inside Main func";
//
//	f1();
//
//	cout << "\n";
//	return 0;
//}