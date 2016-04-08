/*
 * bar.h
 *
 *  Created on: 8 апр. 2016 г.
 *      Author: a.s.preobrazhenskiy
 */

#ifndef BAR_H_
#define BAR_H_

class Bar{
private:
	std::string _name;
	std::string _beer;
public:
	Bar(std::string _n, std::string _b) : _name(_n), _beer(_b)
	{ }
	void helloMessage(){
			std::cout << "Вы пришли в " << _name << std::endl;
			std::cout << "Самое время выпить " << _beer << "!" << std::endl;
	}
};

Bar bar("Окоп", "Василеостровское тёмное");

#endif /* BAR_H_ */
