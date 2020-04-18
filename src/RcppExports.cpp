// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fastKronEye_Y
arma::vec fastKronEye_Y(arma::mat const& Sigma, arma::mat const& Y, int const& n, int const& J);
RcppExport SEXP _test_fastKronEye_Y(SEXP SigmaSEXP, SEXP YSEXP, SEXP nSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int const& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int const& >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(fastKronEye_Y(Sigma, Y, n, J));
    return rcpp_result_gen;
END_RCPP
}
// fastKronEye_crossprod
arma::mat fastKronEye_crossprod(arma::mat const& XtX, arma::mat const& Sigma, arma::vec const& pvec, int const& n, int const& J);
RcppExport SEXP _test_fastKronEye_crossprod(SEXP XtXSEXP, SEXP SigmaSEXP, SEXP pvecSEXP, SEXP nSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< int const& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int const& >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(fastKronEye_crossprod(XtX, Sigma, pvec, n, J));
    return rcpp_result_gen;
END_RCPP
}
// predict_surbayes_helper
arma::mat predict_surbayes_helper(arma::vec const& mu, arma::mat const& Sigma, int const& n, int const& J);
RcppExport SEXP _test_predict_surbayes_helper(SEXP muSEXP, SEXP SigmaSEXP, SEXP nSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< int const& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int const& >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_surbayes_helper(mu, Sigma, n, J));
    return rcpp_result_gen;
END_RCPP
}
// predict_surbayes_cpp
arma::cube predict_surbayes_cpp(arma::mat const& Mu, List const& Sigmalist, int const& n, int const& J, int const& nsims);
RcppExport SEXP _test_predict_surbayes_cpp(SEXP MuSEXP, SEXP SigmalistSEXP, SEXP nSEXP, SEXP JSEXP, SEXP nsimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< List const& >::type Sigmalist(SigmalistSEXP);
    Rcpp::traits::input_parameter< int const& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int const& >::type J(JSEXP);
    Rcpp::traits::input_parameter< int const& >::type nsims(nsimsSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_surbayes_cpp(Mu, Sigmalist, n, J, nsims));
    return rcpp_result_gen;
END_RCPP
}
// sample_sigma
arma::mat sample_sigma(double const& nu, arma::mat const& V, int const& p);
RcppExport SEXP _test_sample_sigma(SEXP nuSEXP, SEXP VSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double const& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type V(VSEXP);
    Rcpp::traits::input_parameter< int const& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_sigma(nu, V, p));
    return rcpp_result_gen;
END_RCPP
}
// sur_sample_gibbs_cpp
List sur_sample_gibbs_cpp(arma::mat Sigma, int const& M, arma::mat const& X, arma::mat const& X0, arma::mat const& XtX, arma::mat const& X0tX0, arma::mat const& Y, arma::mat const& Y0, arma::vec const& y, arma::vec const& y0, double const& a0, arma::vec const& pvec, int burnin, int thin);
RcppExport SEXP _test_sur_sample_gibbs_cpp(SEXP SigmaSEXP, SEXP MSEXP, SEXP XSEXP, SEXP X0SEXP, SEXP XtXSEXP, SEXP X0tX0SEXP, SEXP YSEXP, SEXP Y0SEXP, SEXP ySEXP, SEXP y0SEXP, SEXP a0SEXP, SEXP pvecSEXP, SEXP burninSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< int const& >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X0tX0(X0tX0SEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< double const& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(sur_sample_gibbs_cpp(Sigma, M, X, X0, XtX, X0tX0, Y, Y0, y, y0, a0, pvec, burnin, thin));
    return rcpp_result_gen;
END_RCPP
}
// sur_sample_cov_helper_cpp
arma::mat sur_sample_cov_helper_cpp(arma::mat const& Y, List const& Xlist, int const& n, int const& J, arma::vec const& pj, double const& sigma11, arma::vec const& r1);
RcppExport SEXP _test_sur_sample_cov_helper_cpp(SEXP YSEXP, SEXP XlistSEXP, SEXP nSEXP, SEXP JSEXP, SEXP pjSEXP, SEXP sigma11SEXP, SEXP r1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List const& >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< int const& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int const& >::type J(JSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type pj(pjSEXP);
    Rcpp::traits::input_parameter< double const& >::type sigma11(sigma11SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type r1(r1SEXP);
    rcpp_result_gen = Rcpp::wrap(sur_sample_cov_helper_cpp(Y, Xlist, n, J, pj, sigma11, r1));
    return rcpp_result_gen;
END_RCPP
}
// sur_sample_cpp
List sur_sample_cpp(arma::mat const& Y, List const& Xlist, arma::vec const& y, arma::mat const& X, arma::mat const& XtX, arma::vec const& pj, int const& M);
RcppExport SEXP _test_sur_sample_cpp(SEXP YSEXP, SEXP XlistSEXP, SEXP ySEXP, SEXP XSEXP, SEXP XtXSEXP, SEXP pjSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List const& >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type pj(pjSEXP);
    Rcpp::traits::input_parameter< int const& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(sur_sample_cpp(Y, Xlist, y, X, XtX, pj, M));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_test_fastKronEye_Y", (DL_FUNC) &_test_fastKronEye_Y, 4},
    {"_test_fastKronEye_crossprod", (DL_FUNC) &_test_fastKronEye_crossprod, 5},
    {"_test_predict_surbayes_helper", (DL_FUNC) &_test_predict_surbayes_helper, 4},
    {"_test_predict_surbayes_cpp", (DL_FUNC) &_test_predict_surbayes_cpp, 5},
    {"_test_sample_sigma", (DL_FUNC) &_test_sample_sigma, 3},
    {"_test_sur_sample_gibbs_cpp", (DL_FUNC) &_test_sur_sample_gibbs_cpp, 14},
    {"_test_sur_sample_cov_helper_cpp", (DL_FUNC) &_test_sur_sample_cov_helper_cpp, 7},
    {"_test_sur_sample_cpp", (DL_FUNC) &_test_sur_sample_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_test(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
