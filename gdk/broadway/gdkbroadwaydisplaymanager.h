/* gdkbroadwaydisplaymanager.h
 *
 * Copyright (C) 2005-2007  Imendio AB
 * Copyright 2010 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined(__GDKBROADWAY_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdkbroadway.h> can be included directly."
#endif

#ifndef __GDK_BROADWAY_DISPLAY_MANAGER_H__
#define __GDK_BROADWAY_DISPLAY_MANAGER_H__

#include <gdk/gdk.h>

G_BEGIN_DECLS

#define GDK_TYPE_BROADWAY_DISPLAY_MANAGER    (gdk_broadway_display_manager_get_type ())
#define GDK_BROADWAY_DISPLAY_MANAGER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_BROADWAY_DISPLAY_MANAGER, GdkBroadwayDisplayManager))

#ifdef GDK_COMPILATION
typedef struct _GdkBroadwayDisplayManager GdkBroadwayDisplayManager;
#else
typedef GdkDisplayManager _GdkBroadwayDisplayManager;
#endif
typedef struct _GdkDisplayManagerClass GdkBroadwayDisplayManagerClass;

GType gdk_broadway_display_manager_get_type (void);

G_END_DECLS

#endif /* __GDK_BROADWAY_DISPLAY_MANAGER_H__ */