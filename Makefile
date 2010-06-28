# The toplevel DocBook file of our project
DOCUMENT = pnsqc.xml

$(DOCUMENT): article.txt
	asciidoc -a docinfo -b docbook -o pnsqc.xml article.txt

# Include the DocBook Kit's makefile rules
include docbook-kit/tools/Makefile.inc

# Create a 'make check' shortcut for all kinds of validity checking
check: check-document check-spelling

CLEANFILES += fop.cfg $(DOCUMENT)
