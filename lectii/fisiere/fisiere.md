Ca sa citi din fisier ne trebuie biblioteca
#include <fstream>

descidere ci creare fisier // asa pot scire si citi din fisierule filename.txt
fstream myfile("filename.txt");
// myfile poate fi orice
MyFile << "Files can be tricky, but it is fun enough!"; // cu asta scriu in fisier
MyFile >> myText; // cu asta citesc;

daca doar doresc sa citesc dintrun fisier voi folosi
ifstream myfilein("filename.txt")
si acum pot folosi myfilein ca si cin

daca doresc doar sa scriu intrun fisier voi folosi
ofstream myfileout("filename.txt")
si acum pot folosi myfileout ca si cout