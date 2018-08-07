/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Delay.h
 * Author: cancian
 *
 * Created on 21 de Junho de 2018, 19:49
 */

#ifndef DELAY_H
#define DELAY_H

#include "ModelComponent.h"

class Delay: public ModelComponent {
public:
	Delay();
	Delay(const Delay& orig);
	virtual ~Delay();
    void setDelayExpression(std::string _delayExpression);
    std::string getDelayExpression() const;
    void setDelayTimeUnit(Util::TimeUnit _delayTimeUnit);
    Util::TimeUnit getDelayTimeUnit() const;
private:
	std::string _delayExpression="1";
	Util::TimeUnit _delayTimeUnit=Util::TimeUnit::TU_second;
};

#endif /* DELAY_H */

