/*
 * static.cpp
 *
 *  Created on: 18-May-2020
 *      Author: nitin
 */

#include<iostream>
using namespace std;

class Var{
	static int i;
public:
	void inc(void){
		i++;
	}
	void dec(void){
		i--;
	}

	static void disp(void);

};

void Var::disp(void){
	cout<<"i= "<<i<<endl;
}

int Var::i=12;

int main(void)
{
	Var d;
	d.inc();
	d.disp();
	d.dec();
	//Var::i=45;
	Var::disp();
	Var::disp();
	return 1;
}


