// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_anybad_loc
bool rcpp_anybad_loc(IntegerVector lower, IntegerVector upper);
RcppExport SEXP _tinycodet_rcpp_anybad_loc(SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_anybad_loc(lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_convert_neg_i
IntegerVector rcpp_convert_neg_i(IntegerVector n_matches, IntegerVector i);
RcppExport SEXP _tinycodet_rcpp_convert_neg_i(SEXP n_matchesSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n_matches(n_matchesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_neg_i(n_matches, i));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_convert_pos_i
IntegerVector rcpp_convert_pos_i(IntegerVector n_matches, IntegerVector i);
RcppExport SEXP _tinycodet_rcpp_convert_pos_i(SEXP n_matchesSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n_matches(n_matchesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_pos_i(n_matches, i));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_alloc_stri_locate_ith
IntegerMatrix rcpp_alloc_stri_locate_ith(List p1, IntegerVector i);
RcppExport SEXP _tinycodet_rcpp_alloc_stri_locate_ith(SEXP p1SEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_alloc_stri_locate_ith(p1, i));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP C_any_neg(void *);
RcppExport SEXP C_any_nonpos(void *);

static const R_CallMethodDef CallEntries[] = {
    {"_tinycodet_rcpp_anybad_loc", (DL_FUNC) &_tinycodet_rcpp_anybad_loc, 2},
    {"_tinycodet_rcpp_convert_neg_i", (DL_FUNC) &_tinycodet_rcpp_convert_neg_i, 2},
    {"_tinycodet_rcpp_convert_pos_i", (DL_FUNC) &_tinycodet_rcpp_convert_pos_i, 2},
    {"_tinycodet_rcpp_alloc_stri_locate_ith", (DL_FUNC) &_tinycodet_rcpp_alloc_stri_locate_ith, 2},
    {"C_any_neg",    (DL_FUNC) &C_any_neg,    1},
    {"C_any_nonpos", (DL_FUNC) &C_any_nonpos, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_tinycodet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
