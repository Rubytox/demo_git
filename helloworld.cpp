#include <iostream>

using namespace std;

//PROTOS
int ajouteDeux(int x);
int carre(int x);
int perimRectangle(int longueur, int largeur);
//CODE
int main(int argc, char* argv[])
{
	cout << "Hello, world !" << endl;
	return 0;
}

int ajouteDeux(int x)
{
	return x + 2;
}

int carre(int x)
{
	return x * x;
}

int perimRectangle(int longueur, int largeur)
{
	return (longueur + largeur) * 2;
}
