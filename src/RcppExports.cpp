// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collectorGuess
std::string collectorGuess(CharacterVector input);
RcppExport SEXP readr_collectorGuess(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    __result = Rcpp::wrap(collectorGuess(input));
    return __result;
END_RCPP
}
// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP readr_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    __result = Rcpp::wrap(read_connection_(con, chunk_size));
    return __result;
END_RCPP
}
// utctime
NumericVector utctime(IntegerVector year, IntegerVector month, IntegerVector day, IntegerVector hour, IntegerVector min, IntegerVector sec, NumericVector psec, bool repair);
RcppExport SEXP readr_utctime(SEXP yearSEXP, SEXP monthSEXP, SEXP daySEXP, SEXP hourSEXP, SEXP minSEXP, SEXP secSEXP, SEXP psecSEXP, SEXP repairSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type year(yearSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type month(monthSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type day(daySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sec(secSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type psec(psecSEXP);
    Rcpp::traits::input_parameter< bool >::type repair(repairSEXP);
    __result = Rcpp::wrap(utctime(year, month, day, hour, min, sec, psec, repair));
    return __result;
END_RCPP
}
// date_time_locale
List date_time_locale();
RcppExport SEXP readr_date_time_locale() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(date_time_locale());
    return __result;
END_RCPP
}
// dim_tokens_
IntegerVector dim_tokens_(List sourceSpec, List tokenizerSpec);
RcppExport SEXP readr_dim_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    __result = Rcpp::wrap(dim_tokens_(sourceSpec, tokenizerSpec));
    return __result;
END_RCPP
}
// count_fields_
std::vector<int> count_fields_(List sourceSpec, List tokenizerSpec);
RcppExport SEXP readr_count_fields_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    __result = Rcpp::wrap(count_fields_(sourceSpec, tokenizerSpec));
    return __result;
END_RCPP
}
// tokenize_
RObject tokenize_(List sourceSpec, List tokenizerSpec, int n_max);
RcppExport SEXP readr_tokenize_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(tokenize_(sourceSpec, tokenizerSpec, n_max));
    return __result;
END_RCPP
}
// parse_vector_
SEXP parse_vector_(CharacterVector x, List collectorSpec, const std::vector<std::string>& na);
RcppExport SEXP readr_parse_vector_(SEXP xSEXP, SEXP collectorSpecSEXP, SEXP naSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type collectorSpec(collectorSpecSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    __result = Rcpp::wrap(parse_vector_(x, collectorSpec, na));
    return __result;
END_RCPP
}
// read_file_
CharacterVector read_file_(List sourceSpec);
RcppExport SEXP readr_read_file_(SEXP sourceSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    __result = Rcpp::wrap(read_file_(sourceSpec));
    return __result;
END_RCPP
}
// read_lines_
CharacterVector read_lines_(List sourceSpec, int n_max);
RcppExport SEXP readr_read_lines_(SEXP sourceSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(read_lines_(sourceSpec, n_max));
    return __result;
END_RCPP
}
// read_tokens
RObject read_tokens(List sourceSpec, List tokenizerSpec, ListOf<List> colSpecs, CharacterVector col_names, int n_max, bool progress);
RcppExport SEXP readr_read_tokens(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP colSpecsSEXP, SEXP col_namesSEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type colSpecs(colSpecsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    __result = Rcpp::wrap(read_tokens(sourceSpec, tokenizerSpec, colSpecs, col_names, n_max, progress));
    return __result;
END_RCPP
}
// collectorsGuess
std::vector<std::string> collectorsGuess(List sourceSpec, List tokenizerSpec, int n);
RcppExport SEXP readr_collectorsGuess(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(collectorsGuess(sourceSpec, tokenizerSpec, n));
    return __result;
END_RCPP
}
// whitespaceColumns
List whitespaceColumns(List sourceSpec, int n);
RcppExport SEXP readr_whitespaceColumns(SEXP sourceSpecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(whitespaceColumns(sourceSpec, n));
    return __result;
END_RCPP
}
// type_convert_col
RObject type_convert_col(CharacterVector x, List spec, int col, const std::vector<std::string>& na, bool trim_ws);
RcppExport SEXP readr_type_convert_col(SEXP xSEXP, SEXP specSEXP, SEXP colSEXP, SEXP naSEXP, SEXP trim_wsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type spec(specSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    __result = Rcpp::wrap(type_convert_col(x, spec, col, na, trim_ws));
    return __result;
END_RCPP
}
// stream_delim
std::string stream_delim(List df, const std::string& path, char delim, const std::string& na, bool col_names, bool append);
RcppExport SEXP readr_stream_delim(SEXP dfSEXP, SEXP pathSEXP, SEXP delimSEXP, SEXP naSEXP, SEXP col_namesSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    __result = Rcpp::wrap(stream_delim(df, path, delim, na, col_names, append));
    return __result;
END_RCPP
}
