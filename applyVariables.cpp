//
// Created by advanced on 17-2-16.
//

#include "MOPSO.h"

Particle *particle;
ANGLE *angle;
myRep rep;

void applyVariable(){
    particle = new Particle[nPop];                       // nPop = inputFilesNumber + multiplyFilesNumber
    angle = new ANGLE[rep.size()+100];
    angle[0].id = -1;
}