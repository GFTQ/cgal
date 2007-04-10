#ifndef CGAL_TEST_CONFIGURATION_H
#define CGAL_TEST_CONFIGURATION_H

/*! This files contains define statements, include statement, and typedef
 * of the number types, kernel, and traits used.
 *
 */

#define DOUBLE_NT                       0
#define MP_FLOAT_NT                     1
#define GMPZ_NT                         2
#define LEDA_RAT_NT                     3
#define QUOTIENT_MP_FLOAT_NT            4
#define QUOTIENT_CGAL_GMPZ_NT           5
#define CGAL_GMPQ_NT                    6
#define LAZY_LEDA_RAT_NT                7
#define LAZY_CGAL_GMPQ_NT               8
#define LAZY_QUOTIENT_MP_FLOAT_NT       9
#define LEDA_REAL_NT                    10
#define CORE_EXPR_NT                    11
#define LAZY_GMPZ_NT                    12

#define CARTESIAN_KERNEL                0
#define SIMPLE_CARTESIAN_KERNEL         1

#define SEGMENT_TRAITS                  0
#define NON_CACHING_SEGMENT_TRAITS      1
#define POLYLINE_TRAITS                 2
#define NON_CACHING_POLYLINE_TRAITS     3
#define CORE_CONIC_TRAITS               4
#define LINE_ARC_TRAITS                 5
#define CIRCULAR_ARC_TRAITS             6
#define CIRCULAR_LINE_ARC_TRAITS        7

// Default value based on dependencies:
#if TEST_TRAITS == CORE_CONIC_TRAITS
#if !defined(TEST_NT)
#define TEST_NT CORE_EXPR_NT
#endif
#endif

// Default values:
#if !defined(TEST_KERNEL)
#define TEST_KERNEL CARTESIAN_KERNEL
#endif

#if !defined(TEST_NT)
#define TEST_NT QUOTIENT_MP_FLOAT_NT
#endif

#if !defined(TEST_TRAITS)
#define TEST_TRAITS SEGMENT_TRAITS
#endif

// Illegal combinations:
#if TEST_TRAITS == CORE_CONIC_TRAITS && TEST_NT != CORE_EXPR_NT
#error "Core conic traits implies Core Expr number type!"
#endif

#endif
