/*
 * bar.h
 *
 *  Created on: 8 ���. 2016 �.
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
			std::cout << "�� ������ � " << _name << std::endl;
			std::cout << "����� ����� ������ " << _beer << "!" << std::endl;
	}
};

Bar bar("����", "���������������� �����");

#endif /* BAR_H_ */
