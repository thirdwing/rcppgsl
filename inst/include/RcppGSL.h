// RcppGSL.h: Rcpp/GSL glue
//
// Copyright (C)  2010 Romain Francois and Dirk Eddelbuettel
//
// This file is part of RcppGSL.
//
// RcppGSL is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//                           
// RcppGSL is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with RcppGSL.  If not, see <http://www.gnu.org/licenses/>.

#ifndef RCPPGSL__RCPPGSL_H
#define RCPPGSL__RCPPGSL_H

#include <RcppCommon.h>
#include <gsl/gsl_vector.h>

/* forward declarations */
namespace Rcpp{
	template <> SEXP wrap( const gsl_vector& ) ;
}

/* implementations */
#include <Rcpp.h>

namespace Rcpp{
	
// namespace RcppGSL{
// 
// template <typename T> struct gsl_vector_type_traits ;
// template <> struct gsl_vector_type_traits<gsl_vector> {
// 	typedef double type ;
// } ;
// 
// } // namespace RcppGSL

template <> SEXP wrap( const gsl_vector& x){
	return wrap( x.data, x.data + x.size ) ;
}

} 

#endif