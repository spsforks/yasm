# $IdPath$

TESTS += bitvect_test
TESTS += floatnum_test

noinst_PROGRAMS += bitvect_test
noinst_PROGRAMS += floatnum_test

bitvect_test_CFLAGS =
bitvect_test_SOURCES  = libyasm/tests/bitvect_test.c
bitvect_test_SOURCES += $(CHECKFILES)
bitvect_test_LDFLAGS =
bitvect_test_LDADD = libyasm.la @LIBLTDL@ $(INTLLIBS) @LIBADD_DL@

#bytecode_test_CFLAGS =
#bytecode_test_SOURCES  = src/tests/bytecode_test.c
#bytecode_test_SOURCES += $(YASMPARSERFILES)
#bytecode_test_SOURCES += $(YASMPREPROCFILES)
#bytecode_test_SOURCES += $(YASMOPTIMIZERFILES)
#bytecode_test_SOURCES += $(YASMOBJFMTFILES)
#bytecode_test_SOURCES += $(YASMARCHFILES)
#bytecode_test_SOURCES += $(CHECKFILES)
#bytecode_test_LDFLAGS =
#bytecode_test_LDADD = libyasm.la @LIBLTDL@ $(INTLLIBS) @LIBADD_DL@

floatnum_test_CFLAGS =
floatnum_test_SOURCES  = libyasm/tests/floatnum_test.c
floatnum_test_SOURCES += $(CHECKFILES)
floatnum_test_LDFLAGS =
floatnum_test_LDADD = libyasm.la @LIBLTDL@ $(INTLLIBS) @LIBADD_DL@

#memexpr_test_CFLAGS =
#memexpr_test_SOURCES  = src/tests/memexpr_test.c
#memexpr_test_SOURCES += $(YASMPARSERFILES)
#memexpr_test_SOURCES += $(YASMPREPROCFILES)
#memexpr_test_SOURCES += $(YASMOPTIMIZERFILES)
#memexpr_test_SOURCES += $(YASMOBJFMTFILES)
#memexpr_test_SOURCES += $(YASMARCHFILES)
#memexpr_test_SOURCES += $(CHECKFILES)
#memexpr_test_LDFLAGS =
#memexpr_test_LDADD = libyasm.la @LIBLTDL@ $(INTLLIBS) @LIBADD_DL@