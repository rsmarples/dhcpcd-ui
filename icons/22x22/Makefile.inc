SRCDIR=		../../scalable

# .PATH is for BSD make, VPATH is for GNU make
.PATH:		${SRCDIR}/${CATEGORY}
VPATH+=		${SRCDIR}/${CATEGORY}

SIZE=		22

MK=		../../../mk
include 	${MK}/icon.mk