CC=cc
SCANNER=wayland-scanner
PREFIX=/usr/local
BINDIR=$(PREFIX)/bin
LDFLAGS=-lrt -lm -lwayland-client -lEGL -lGL -ldrm -lgbm -lwayland-egl -lwayland-cursor -lvulkan 
OBJ=xdg-shell.o opendoka2.o
GEN=xdg-shell.c xdg-shell.h
all: $(GEN) opendoka2
clean: 
	rm -f opendoka2 $(GEN) $(OBJ)
opendoka2: $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
install: opendoka2
	install opendoka2 $(BINDIR)
xdg-shell.c: xdg-shell.xml
	$(SCANNER) code < $< > $@
xdg-shell.h: xdg-shell.xml
	$(SCANNER) client-header < $< > $@
.PHONY: all clean
