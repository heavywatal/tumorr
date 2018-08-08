// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_tumopp
Rcpp::CharacterVector cpp_tumopp(const std::vector<std::string>& args);
RcppExport SEXP _tumopp_cpp_tumopp(SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tumopp(args));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tumopp_ms
Rcpp::CharacterVector cpp_tumopp_ms(unsigned int nsam, const std::vector<std::string>& args);
RcppExport SEXP _tumopp_cpp_tumopp_ms(SEXP nsamSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type nsam(nsamSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tumopp_ms(nsam, args));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tumopp_cpp_tumopp", (DL_FUNC) &_tumopp_cpp_tumopp, 1},
    {"_tumopp_cpp_tumopp_ms", (DL_FUNC) &_tumopp_cpp_tumopp_ms, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_tumopp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
