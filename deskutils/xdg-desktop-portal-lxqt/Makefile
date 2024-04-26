PORTNAME=	xdg-desktop-portal-lxqt
PORTVERSION=	1.0.1
CATEGORIES=	deskutils wayland

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Portal frontend service for LXQT
WWW=		https://github.com/flatpak/xdg-desktop-portal

LICENSE=	LGPL21

USE_GITHUB=     yes
GH_ACCOUNT=     lxqt

USES=		cmake kde:6 pkgconfig qt:6
USE_KDE=	windowsystem
USE_QT=		base:run tools:build

post-install:
	@${RM} -r ${STAGEDIR}${PREFIX}/lib/systemd

.include <bsd.port.mk>
