/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Create.h
 * Author: cancian
 *
 * Created on 21 de Junho de 2018, 20:12
 */

#ifndef CREATE_H
#define CREATE_H

#include "SourceModelComponent.h"

class Create: public SourceModelComponent {
public:
	Create();
	Create(const Create& orig);
	virtual ~Create();
public:
	static void execute();
private:

};

#endif /* CREATE_H */

