#ifndef ABSENCES_H_INCLUDED
#define ABSENCES_H_INCLUDED

typedef struct Absences Absences;

struct Absences{   
  double **abs;
  char *a;   
  Absences *suivant;
};

typedef struct PileAbsences PileAbsences;
struct PileAbsences{    
  Absences *premier;
};
PileAbsences *initialiserAbsences();

#endif 
// ABSENCES_H_INCLUDED
