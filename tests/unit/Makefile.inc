# these files are used in every single unit test program

UNITFILES = curlcheck.h \
 $(top_srcdir)/tests/libtest/test.h \
 $(top_srcdir)/tests/libtest/first.c

# These are all unit test programs
UNITPROGS = unit1300 unit1301 unit1302 unit1303 unit1304 unit1305 unit1307

unit1300_SOURCES = unit1300.c $(UNITFILES)
unit1301_SOURCES = unit1301.c $(UNITFILES)
unit1302_SOURCES = unit1302.c $(UNITFILES)
unit1303_SOURCES = unit1303.c $(UNITFILES)
unit1304_SOURCES = unit1304.c $(UNITFILES)
unit1305_SOURCES = unit1305.c $(UNITFILES)
unit1307_SOURCES = unit1307.c $(UNITFILES)
