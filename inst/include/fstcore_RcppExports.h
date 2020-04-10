// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_fstcore_RCPPEXPORTS_H_GEN_
#define RCPP_fstcore_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace fstcore {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("fstcore", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("fstcore", "_fstcore_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in fstcore");
            }
        }
    }

    inline int fstlib_version() {
        typedef SEXP(*Ptr_fstlib_version)();
        static Ptr_fstlib_version p_fstlib_version = NULL;
        if (p_fstlib_version == NULL) {
            validateSignature("int(*fstlib_version)()");
            p_fstlib_version = (Ptr_fstlib_version)R_GetCCallable("fstcore", "_fstcore_fstlib_version");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fstlib_version();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline SEXP fststore(Rcpp::String fileName, SEXP table, SEXP compression, SEXP uniformEncoding) {
        typedef SEXP(*Ptr_fststore)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_fststore p_fststore = NULL;
        if (p_fststore == NULL) {
            validateSignature("SEXP(*fststore)(Rcpp::String,SEXP,SEXP,SEXP)");
            p_fststore = (Ptr_fststore)R_GetCCallable("fstcore", "_fstcore_fststore");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fststore(Shield<SEXP>(Rcpp::wrap(fileName)), Shield<SEXP>(Rcpp::wrap(table)), Shield<SEXP>(Rcpp::wrap(compression)), Shield<SEXP>(Rcpp::wrap(uniformEncoding)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP fstmetadata(Rcpp::String fileName) {
        typedef SEXP(*Ptr_fstmetadata)(SEXP);
        static Ptr_fstmetadata p_fstmetadata = NULL;
        if (p_fstmetadata == NULL) {
            validateSignature("SEXP(*fstmetadata)(Rcpp::String)");
            p_fstmetadata = (Ptr_fstmetadata)R_GetCCallable("fstcore", "_fstcore_fstmetadata");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fstmetadata(Shield<SEXP>(Rcpp::wrap(fileName)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP fstretrieve(Rcpp::String fileName, SEXP columnSelection, SEXP startRow, SEXP endRow) {
        typedef SEXP(*Ptr_fstretrieve)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_fstretrieve p_fstretrieve = NULL;
        if (p_fstretrieve == NULL) {
            validateSignature("SEXP(*fstretrieve)(Rcpp::String,SEXP,SEXP,SEXP)");
            p_fstretrieve = (Ptr_fstretrieve)R_GetCCallable("fstcore", "_fstcore_fstretrieve");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fstretrieve(Shield<SEXP>(Rcpp::wrap(fileName)), Shield<SEXP>(Rcpp::wrap(columnSelection)), Shield<SEXP>(Rcpp::wrap(startRow)), Shield<SEXP>(Rcpp::wrap(endRow)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP fsthasher(SEXP rawVec, SEXP seed, SEXP blockHash) {
        typedef SEXP(*Ptr_fsthasher)(SEXP,SEXP,SEXP);
        static Ptr_fsthasher p_fsthasher = NULL;
        if (p_fsthasher == NULL) {
            validateSignature("SEXP(*fsthasher)(SEXP,SEXP,SEXP)");
            p_fsthasher = (Ptr_fsthasher)R_GetCCallable("fstcore", "_fstcore_fsthasher");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fsthasher(Shield<SEXP>(Rcpp::wrap(rawVec)), Shield<SEXP>(Rcpp::wrap(seed)), Shield<SEXP>(Rcpp::wrap(blockHash)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP fstcomp(SEXP rawVec, SEXP compressor, SEXP compression, SEXP hash) {
        typedef SEXP(*Ptr_fstcomp)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_fstcomp p_fstcomp = NULL;
        if (p_fstcomp == NULL) {
            validateSignature("SEXP(*fstcomp)(SEXP,SEXP,SEXP,SEXP)");
            p_fstcomp = (Ptr_fstcomp)R_GetCCallable("fstcore", "_fstcore_fstcomp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fstcomp(Shield<SEXP>(Rcpp::wrap(rawVec)), Shield<SEXP>(Rcpp::wrap(compressor)), Shield<SEXP>(Rcpp::wrap(compression)), Shield<SEXP>(Rcpp::wrap(hash)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP fstdecomp(SEXP rawVec) {
        typedef SEXP(*Ptr_fstdecomp)(SEXP);
        static Ptr_fstdecomp p_fstdecomp = NULL;
        if (p_fstdecomp == NULL) {
            validateSignature("SEXP(*fstdecomp)(SEXP)");
            p_fstdecomp = (Ptr_fstdecomp)R_GetCCallable("fstcore", "_fstcore_fstdecomp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fstdecomp(Shield<SEXP>(Rcpp::wrap(rawVec)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP getnrofthreads() {
        typedef SEXP(*Ptr_getnrofthreads)();
        static Ptr_getnrofthreads p_getnrofthreads = NULL;
        if (p_getnrofthreads == NULL) {
            validateSignature("SEXP(*getnrofthreads)()");
            p_getnrofthreads = (Ptr_getnrofthreads)R_GetCCallable("fstcore", "_fstcore_getnrofthreads");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_getnrofthreads();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline int setnrofthreads(SEXP nrOfThreads) {
        typedef SEXP(*Ptr_setnrofthreads)(SEXP);
        static Ptr_setnrofthreads p_setnrofthreads = NULL;
        if (p_setnrofthreads == NULL) {
            validateSignature("int(*setnrofthreads)(SEXP)");
            p_setnrofthreads = (Ptr_setnrofthreads)R_GetCCallable("fstcore", "_fstcore_setnrofthreads");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_setnrofthreads(Shield<SEXP>(Rcpp::wrap(nrOfThreads)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline SEXP hasopenmp() {
        typedef SEXP(*Ptr_hasopenmp)();
        static Ptr_hasopenmp p_hasopenmp = NULL;
        if (p_hasopenmp == NULL) {
            validateSignature("SEXP(*hasopenmp)()");
            p_hasopenmp = (Ptr_hasopenmp)R_GetCCallable("fstcore", "_fstcore_hasopenmp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_hasopenmp();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline void restore_after_fork(bool restore) {
        typedef SEXP(*Ptr_restore_after_fork)(SEXP);
        static Ptr_restore_after_fork p_restore_after_fork = NULL;
        if (p_restore_after_fork == NULL) {
            validateSignature("void(*restore_after_fork)(bool)");
            p_restore_after_fork = (Ptr_restore_after_fork)R_GetCCallable("fstcore", "_fstcore_restore_after_fork");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_restore_after_fork(Shield<SEXP>(Rcpp::wrap(restore)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

}

#endif // RCPP_fstcore_RCPPEXPORTS_H_GEN_
