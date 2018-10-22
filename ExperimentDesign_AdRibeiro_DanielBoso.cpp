/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExperimentDesign_AdRIbeiro_DanielBoso.cpp
 * Author: ribeiro
 * 
 * Created on 22 de Outubro de 2018, 14:28
 */

#include "ExperimentDesign_AdRibeiro_DanielBoso.h"

ExperimentDesign_AdRibeiro_DanielBoso::ExperimentDesign_AdRibeiro_DanielBoso() {
}

ExperimentDesign_AdRibeiro_DanielBoso::ExperimentDesign_AdRibeiro_DanielBoso(const ExperimentDesign_AdRibeiro_DanielBoso& orig) {
}

ExperimentDesign_AdRibeiro_DanielBoso::~ExperimentDesign_AdRibeiro_DanielBoso() {
}

std::list<FactorOrInteractionContribution*>* ExperimentDesign_AdRibeiro_DanielBoso::getContributions() const {
	return _contributions;
}

bool ExperimentDesign_AdRibeiro_DanielBoso::generate2krScenarioExperiments(){
    List<SimulationControl*>* _controls = _processAnalyser->getControls();

    int k = _controls->size();
    SimulationScenario* aux;
    
    for(int i= 0; i< pow(2,k);i++){
        aux = new SimulationScenario();
        aux->setName("Design Point " + i);
        int cont = 0;
        SimulationControl* x;
        
        //gera matriz -1 +1
        int potencia = pow(2,k);
        int matrice[potencia][k];
        generateMatrice(*matrice,k);
        
        for(std::list<SimulationControl*>::iterator it=_controls->find(_controls->first()); it != _controls->find(_controls->last()); ++it){
            x = *it;
            aux->setControlValue(x,matrice[i][cont]);
            cont++;
        }
        _processAnalyser->startSimulationOfScenario(aux);
        _scenarios->push_back(aux);
        
    }
    
    return true;
}
void ExperimentDesign_AdRibeiro_DanielBoso::generateMatrice(int* matrice,int k){

}

bool ExperimentDesign_AdRibeiro_DanielBoso::calculateContributionAndCoefficients(){
    return true;
}

ProcessAnalyser_if* ExperimentDesign_AdRibeiro_DanielBoso::getProcessAnalyser() const {
	return _processAnalyser;
}