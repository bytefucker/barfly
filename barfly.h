/*
 * barfly.h
 *
 *  Created on: 8 апр. 2016 г.
 *      Author: a.s.preobrazhenskiy
 */

#ifndef BARFLY_H_
#define BARFLY_H_

class Barfly{
private:
	int _mass;
	float _beerMass;
	float _koeff;
	float _pureAlco;
	float _promille;
public:
	Barfly(int _m, float _bM, float _k) : _mass(_m), _beerMass(_bM), _koeff(_k)
		{ }
	void drink();
	void countPureAlco();
	void showPromille()const;
};

Barfly barfly(90, 500.0, 0.70);	// that's me!

void Barfly::countPureAlco(){
	Barfly::_pureAlco = (5.0 * Barfly::_beerMass) / 100.0;
}

void Barfly::drink(){
		Barfly::_promille += (Barfly::_pureAlco * 0.8 / (Barfly::_mass *  Barfly::_koeff));
}

void Barfly::showPromille()const{
	std::cout << Barfly::_promille << " промилле" << std::endl;
}



#endif /* BARFLY_H_ */
