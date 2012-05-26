/*
 * initial.h
 *
 *  Created on: May 25, 2012
 *      Author: Lyman Gillispie
 */

#ifndef MELT_MOD_INITIAL_H_
#define MELT_MOD_INITIAL_H_

void readrestofline(FILE **infile);
/*FUNCTION MORE SOPHISTICATED SNOWMODEL by Carleen Tijm-Reijmer, 2/2005*/
void initializeglacier2zero_nodata_tens(float ***glaciergrid);

void initializeglacier2zero_nodatadouble(double **glaciergrid);
void toobig_resout();
void checkgridinputdata_ok();
float **matrixreserv(long nrl, long nrh, long ncl, long nch);
double **matrixreservdouble(long nrl, long nrh, long ncl, long nch);
void closefile(FILE **datei, char *name);
void meandayreserve();
void meandaynull();
void meanallnull();
void startinputdata();
void startoutascii();
void startmeltstakes();
void startspecificmassbalance();
void opensnowfree();
void startarrayreserve();
void glacierrowcol();
void readclim();
void  exitclimread();
void  readdatesmassbal();
void areaelevationbelts();

#endif /* MELT_MOD_INITIAL_H_ */