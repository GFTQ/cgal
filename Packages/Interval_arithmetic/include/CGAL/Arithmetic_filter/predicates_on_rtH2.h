// ======================================================================
//
// Copyright (c) 1999 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
// 
// release       :
// release_date  :
// 
// source        : 
// file          : include/CGAL/Arithmetic_filter/predicates_on_rtH2.h
// package       : Interval_arithmetic
// revision      : 2.0.5
// revision_date :
// author(s)     : Sylvain.Pion@sophia.inria.fr
//
// coordinator   : MPI, Saarbruecken
// ======================================================================


#ifndef CGAL_ARITHMETIC_FILTER_PREDICATES_ON_RTH2_H
#define CGAL_ARITHMETIC_FILTER_PREDICATES_ON_RTH2_H

// This file is automatically generated by the script for filtering
// predicates, using Interval arithmetic.

CGAL_BEGIN_NAMESPACE

template < class CT, class ET >
// CGAL_KERNEL_INLINE
Orientation
orientationH2( const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	                    const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                    const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw )
{
  Orientation result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = orientationH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = orientationH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
bool
leftturnH2( const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	                 const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                 const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw )
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = leftturnH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = leftturnH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
bool
rightturnH2(const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	                 const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                 const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw )
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = rightturnH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = rightturnH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
bool
collinearH2(const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	                 const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                 const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw )
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinearH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinearH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact());
  }
  return result;
}
template < class CT, class ET >
// CGAL_KERNEL_INLINE
Bounded_side
side_of_bounded_circleH2( const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                               const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw,
	                               const Filtered_exact<CT,ET>& shx,
	const Filtered_exact<CT,ET>& shy,
	const Filtered_exact<CT,ET>& shw,
	                               const Filtered_exact<CT,ET>& thx,
	const Filtered_exact<CT,ET>& thy,
	const Filtered_exact<CT,ET>& thw )
{
  Bounded_side result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = side_of_bounded_circleH2(
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval(),
		shx.interval(),
		shy.interval(),
		shw.interval(),
		thx.interval(),
		thy.interval(),
		thw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = side_of_bounded_circleH2(
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact(),
		shx.exact(),
		shy.exact(),
		shw.exact(),
		thx.exact(),
		thy.exact(),
		thw.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
Oriented_side
side_of_oriented_circleH2(const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	                               const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw,
	                               const Filtered_exact<CT,ET>& shx,
	const Filtered_exact<CT,ET>& shy,
	const Filtered_exact<CT,ET>& shw,
	                               const Filtered_exact<CT,ET>& thx,
	const Filtered_exact<CT,ET>& thy,
	const Filtered_exact<CT,ET>& thw )
{
  Oriented_side result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = side_of_oriented_circleH2(
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval(),
		shx.interval(),
		shy.interval(),
		shw.interval(),
		thx.interval(),
		thy.interval(),
		thw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = side_of_oriented_circleH2(
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact(),
		shx.exact(),
		shy.exact(),
		shw.exact(),
		thx.exact(),
		thy.exact(),
		thw.exact());
  }
  return result;
}
template < class CT, class ET >
// CGAL_KERNEL_INLINE
Comparison_result
compare_lexicographically_xyH2(const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	                                    const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw)
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = compare_lexicographically_xyH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = compare_lexicographically_xyH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
Comparison_result
compare_xH2( const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phw,
	                  const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhw )
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = compare_xH2(
		phx.interval(),
		phw.interval(),
		qhx.interval(),
		qhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = compare_xH2(
		phx.exact(),
		phw.exact(),
		qhx.exact(),
		qhw.exact());
  }
  return result;
}

// No compare_yH2; use compare_xH2( py, pw, qy, qw)

template < class CT, class ET >
// CGAL_KERNEL_INLINE
Comparison_result
compare_deltax_deltayH2(const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phw,
	                             const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhw,
	                             const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw,
	                             const Filtered_exact<CT,ET>& shy,
	const Filtered_exact<CT,ET>& shw )
  const Filtered_exact<CT,ET>  tbc1 = abs(phx*qhw - qhx*phw) * rhw*shw;
  const Filtered_exact<CT,ET>  tbc2 = abs(rhy*shw - shy*rhw) * phw*qhw;
  return (tbc2 < tbc1) ? LARGER
                       : (tbc1 == tbc2) ? EQUAL : SMALLER;


template <class Filtered_exact<CT,ET>>
// CGAL_KERNEL_INLINE
bool
collinear_are_ordered_along_lineH2(
     const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	     const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	     const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw
                                       )
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinear_are_ordered_along_lineH2(
		phx.interval(),
		phw.interval(),
		qhx.interval(),
		qhw.interval(),
		rhy.interval(),
		rhw.interval(),
		shy.interval(),
		shw.interval(),
		phw.interval(),
		s.interval(),
		rhw.interval(),
		q.interval(),
		tbc1.interval(),
		LARGER.interval(),
		tbc2.interval(),
		S.interval(),
		.interval());		CGAL_KERNEL_INLINE.interval(),
		bool.interval(),
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval(),
		.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinear_are_ordered_along_lineH2(
		phx.exact(),
		phw.exact(),
		qhx.exact(),
		qhw.exact(),
		rhy.exact(),
		rhw.exact(),
		shy.exact(),
		shw.exact(),
		phw.exact(),
		s.exact(),
		rhw.exact(),
		q.exact(),
		tbc1.exact(),
		LARGER.exact(),
		tbc2.exact(),
		S.exact(),
		.exact());		CGAL_KERNEL_INLINE.exact(),
		bool.exact(),
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact(),
		.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_INLINE
bool
collinear_are_strictly_ordered_along_lineH2(
     const Filtered_exact<CT,ET>& phx,
	const Filtered_exact<CT,ET>& phy,
	const Filtered_exact<CT,ET>& phw,
	     const Filtered_exact<CT,ET>& qhx,
	const Filtered_exact<CT,ET>& qhy,
	const Filtered_exact<CT,ET>& qhw,
	     const Filtered_exact<CT,ET>& rhx,
	const Filtered_exact<CT,ET>& rhy,
	const Filtered_exact<CT,ET>& rhw)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinear_are_strictly_ordered_along_lineH2(
		phx.interval(),
		phy.interval(),
		phw.interval(),
		qhx.interval(),
		qhy.interval(),
		qhw.interval(),
		rhx.interval(),
		rhy.interval(),
		rhw.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinear_are_strictly_ordered_along_lineH2(
		phx.exact(),
		phy.exact(),
		phw.exact(),
		qhx.exact(),
		qhy.exact(),
		qhw.exact(),
		rhx.exact(),
		rhy.exact(),
		rhw.exact());
  }
  return result;
}



CGAL_END_NAMESPACE


#ifdef CGAL_ARITHMETIC_FILTER_H
#include <CGAL/Arithmetic_filter/predicates_on_rtH2.h>
#endif // CGAL_ARITHMETIC_FILTER_H

#endif // CGAL_ARITHMETIC_FILTER_PREDICATES_ON_RTH2_H
