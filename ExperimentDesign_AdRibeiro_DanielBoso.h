/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExperimentDesign_AdRIbeiro_DanielBoso.h
 * Author: ribeiro
 *
 * Created on 22 de Outubro de 2018, 14:28
 */

#ifndef EXPERIMENTDESIGN_ADRIBEIRO_DANIELBOSO_H
#define EXPERIMENTDESIGN_ADRIBEIRO_DANIELBOSO_H

#include "ExperimentDesign_if.h"
#include "SimulationScenario.h";
#include <math.h>

class ExperimentDesign_AdRibeiro_DanielBoso : public ExperimentDesign_if{
public:
    ExperimentDesign_AdRibeiro_DanielBoso();
    ExperimentDesign_AdRibeiro_DanielBoso(const ExperimentDesign_AdRibeiro_DanielBoso& orig);
    virtual ~ExperimentDesign_AdRibeiro_DanielBoso();
public:
	ProcessAnalyser_if* getProcessAnalyser() const;
public:
	bool generate2krScenarioExperiments();
	bool calculateContributionAndCoefficients();
	std::list<FactorOrInteractionContribution*>* getContributions() const;
        void generateMatrice(int* matrice,int k);
private:
	ProcessAnalyser_if* _processAnalyser; //= new Traits<ExperimentDesign_if>::ProcessAnalyserImplementation();
	std::list<FactorOrInteractionContribution*>* _contributions = new std::list<FactorOrInteractionContribution*>();
        std::list<SimulationScenario*>* _scenarios = new std::list<SimulationScenario*>();
};

#endif /* EXPERIMENTDESIGN_ADRIBEIRO_DANIELBOSO_H */

