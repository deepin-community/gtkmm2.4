// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUBAR_H
#define _GTKMM_MENUBAR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: menubar.hg,v 1.2 2003/11/17 18:19:00 murrayc Exp $ */


/* menubar.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
 
#include <gtkmm/menushell.h>
#include <gtkmm/menuitem.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenuBar GtkMenuBar;
typedef struct _GtkMenuBarClass GtkMenuBarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class MenuBar_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *
 * @ingroup gtkmmEnums
 */
enum PackDirection
{
  PACK_DIRECTION_LTR,
  PACK_DIRECTION_RTL,
  PACK_DIRECTION_TTB,
  PACK_DIRECTION_BTT
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PackDirection> : public Glib::Value_Enum<Gtk::PackDirection>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** A standard menu bar which usually holds Gtk::Menu submenu items.
 * The useful methods are in the base class - Gtk::MenuShell.
 *
 * The MenuBar widget looks like this:
 * @image html menubar1.png
 *
 * @ingroup Widgets
 * @ingroup Menus
 */

class MenuBar : public MenuShell
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuBar CppObjectType;
  typedef MenuBar_Class CppClassType;
  typedef GtkMenuBar BaseObjectType;
  typedef GtkMenuBarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MenuBar();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MenuBar_Class;
  static CppClassType menubar_class_;

  // noncopyable
  MenuBar(const MenuBar&);
  MenuBar& operator=(const MenuBar&);

protected:
  explicit MenuBar(const Glib::ConstructParams& construct_params);
  explicit MenuBar(GtkMenuBar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenuBar*       gobj()       { return reinterpret_cast<GtkMenuBar*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenuBar* gobj() const { return reinterpret_cast<GtkMenuBar*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:


public:
  MenuBar();

  
  /** Retrieves the current pack direction of the menubar. 
   * See set_pack_direction().
   * 
   * @newin{2,8}
   * 
   * @return The pack direction.
   */
  PackDirection get_pack_direction() const;
  
  /** Sets how items should be packed inside a menubar.
   * 
   * @newin{2,8}
   * 
   * @param pack_dir A new Gtk::PackDirection.
   */
  void set_pack_direction(PackDirection pack_dir);
  
  /** Retrieves the current child pack direction of the menubar.
   * See set_child_pack_direction().
   * 
   * @newin{2,8}
   * 
   * @return The child pack direction.
   */
  PackDirection get_child_pack_direction() const;
  
  /** Sets how widgets should be packed inside the children of a menubar.
   * 
   * @newin{2,8}
   * 
   * @param child_pack_dir A new Gtk::PackDirection.
   */
  void set_child_pack_direction(PackDirection child_pack_dir);
							
  // append, prepend and insert are defined in menushell
  
  /** The pack direction of the menubar.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PackDirection > property_pack_direction() ;

/** The pack direction of the menubar.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PackDirection > property_pack_direction() const;

  /** The child pack direction of the menubar.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PackDirection > property_child_pack_direction() ;

/** The child pack direction of the menubar.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PackDirection > property_child_pack_direction() const;


private:
  void init_accels_handler_(void);


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::MenuBar
   */
  Gtk::MenuBar* wrap(GtkMenuBar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENUBAR_H */

