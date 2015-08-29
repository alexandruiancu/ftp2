SUBDIRS = ftp ftp2 server

bin_PROGRAMS = test
test_SOURCES = test_driver.cpp
test_LDFLAGS = -rdynamic
test_CXXFLAGS = -std=c++11 -I./ftp -I./ftp2 $(CXXFLAGS)
test_LDADD = ./ftp2/libftp2.a ./ftp/libftp.a 

#libftp_v2.a:
#	find . -name "libftp*.o" | xargs $(AR) $(ARFLAGS) libftp_v2.a
#	$(RANLIB) libftp_v2.a






