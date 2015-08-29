lib_LIBRARIES = libftp.a
libftp_a_SOURCES = ftp.cpp ftp_lexer.cpp ftp_parser.cpp
libftp_a_CXXFLAGS = -std=c++11 $(CXXFLAGS)
BUILT_SOURCES = ftp_parser.h ftp_lexer.h
EXTRA_DIST = ftp_parser.ypp ftp_lexer.lpp
SUBDIRS = 

ftp_lexer.h ftp_parser.h: ftp_lexer.lpp ftp_parser.ypp
	$(YACC) $(YFLAGS) --defines=ftp_parser.h \
	--output=ftp_parser.cpp ftp_parser.ypp
	$(LEX) --header-file=ftp_lexer.h \
	--outfile=ftp_lexer.cpp ftp_lexer.lpp

clean:
	rm -v ftp_lexer.h ftp_lexer.cpp
	rm -v ftp_parser.h ftp_parser.cpp
	rm -v *.o

.PHONY: clean


