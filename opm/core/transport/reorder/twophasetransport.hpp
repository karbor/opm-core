/* Copyright 2011 (c) Jostein R. Natvig <Jostein.R.Natvig at sintef.no> */

#ifndef TWOPHASETRANSPORT_HPP_INCLUDED
#define TWOPHASETRANSPORT_HPP_INCLUDED


struct UnstructuredGrid;
void twophasetransport(
    const double *porevolume,
    const double *source,
    double dt,
    struct UnstructuredGrid *grid,
    const double *darcyflux,
    const int *satnum,
    double *saturation);


#endif /* TWOPHASETRANSPORT_HPP_INCLUDED */