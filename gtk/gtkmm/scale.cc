// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/scale.h>
#include <gtkmm/private/scale_p.h>


// -*- c++ -*-
/* $Id: scale.ccg,v 1.2 2004/01/19 19:48:44 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/adjustment.h>

#include <gtk/gtk.h>
#include <math.h>
#include <cstring> //For strlen()
#include <memory>

using std::strlen;

namespace Gtk
{

int Scale::calc_digits_(double step) const
{
  int digits = 0;

  //Copied from gtk_[h|v]scale_new_with_range():
  if (fabs (step) >= 1.0 || step == 0.0)
     digits = 0;
  else {
    digits = abs ((int) floor (log10 (fabs (step))));
    if (digits > 5)
      digits = 5;
  }

  return digits;
}

VScale::VScale(double min, double max, double step)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  Adjustment* adjustment = manage(new Adjustment(min, min, max, step, 10 * step, step));
  // The adjustment will be destroyed along with the object
  set_adjustment(*adjustment);

  set_digits( calc_digits_(step) );
}

VScale::VScale(Adjustment& adjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  set_adjustment(adjustment);
}

VScale::VScale()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  Adjustment* adjustment = manage(new Adjustment(0.0, 0.0, 0.0,
						  0.0, 0.0, 0.0));
  // The adjustment will be destroyed along with the object
  set_adjustment(*adjustment);
}


HScale::HScale(double min, double max, double step)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  Adjustment* adjustment = manage(new Adjustment(min, min, max, step, 10 * step, step));
  // The adjustment will be destroyed along with the object
  set_adjustment(*adjustment);

  set_digits( calc_digits_(step) );
}

HScale::HScale()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  Adjustment* adjustment = manage(new Adjustment(0.0, 0.0, 0.0,
						  0.0, 0.0, 0.0));
  // The adjustment will be destroyed along with the object
  set_adjustment(*adjustment);
}

HScale::HScale(Adjustment& adjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  set_adjustment(adjustment);
}

} // namespace Gtk


namespace
{


static gchar* Scale_signal_format_value_callback(GtkScale* self, gdouble p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< Glib::ustring,double > SlotType;

  Scale* obj = dynamic_cast<Scale*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return (strlen((*static_cast<SlotType*>(slot))(p0
).c_str()) ? g_strdup((*static_cast<SlotType*>(slot))(p0
).c_str()) : 0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gchar* RType;
  return RType();
}

static gchar* Scale_signal_format_value_notify_callback(GtkScale* self, gdouble p0, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,double > SlotType;

  Scale* obj = dynamic_cast<Scale*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gchar* RType;
  return RType();
}

static const Glib::SignalProxyInfo Scale_signal_format_value_info =
{
  "format_value",
  (GCallback) &Scale_signal_format_value_callback,
  (GCallback) &Scale_signal_format_value_notify_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Scale* wrap(GtkScale* object, bool take_copy)
{
  return dynamic_cast<Gtk::Scale *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Scale_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Scale_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_scale_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Scale_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->draw_value = &draw_value_vfunc_callback;

  klass->format_value = &format_value_callback;
}

void Scale_Class::draw_value_vfunc_callback(GtkScale* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->draw_value_vfunc();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->draw_value)
  {
    (*base->draw_value)(self);
  }

}

gchar* Scale_Class::format_value_callback(GtkScale* self, gdouble p0)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return (strlen(obj->on_format_value(p0
).c_str()) ? g_strdup(obj->on_format_value(p0
).c_str()) : 0);
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->format_value)
    return (*base->format_value)(self, p0);

  typedef gchar* RType;
  return RType();
}


Glib::ObjectBase* Scale_Class::wrap_new(GObject* o)
{
  return manage(new Scale((GtkScale*)(o)));

}


/* The implementation: */

Scale::Scale(const Glib::ConstructParams& construct_params)
:
  Gtk::Range(construct_params)
{
  }

Scale::Scale(GtkScale* castitem)
:
  Gtk::Range((GtkRange*)(castitem))
{
  }

Scale::~Scale()
{
  destroy_();
}

Scale::CppClassType Scale::scale_class_; // initialize static member

GType Scale::get_type()
{
  return scale_class_.init().get_type();
}


GType Scale::get_base_type()
{
  return gtk_scale_get_type();
}


Scale::Scale()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Range(Glib::ConstructParams(scale_class_.init()))
{
  

}

void Scale::set_digits(int digits)
{
  gtk_scale_set_digits(gobj(), digits);
}

int Scale::get_digits() const
{
  return gtk_scale_get_digits(const_cast<GtkScale*>(gobj()));
}

void Scale::set_draw_value(bool draw_value)
{
  gtk_scale_set_draw_value(gobj(), static_cast<int>(draw_value));
}

bool Scale::get_draw_value() const
{
  return gtk_scale_get_draw_value(const_cast<GtkScale*>(gobj()));
}

void Scale::set_value_pos(PositionType pos)
{
  gtk_scale_set_value_pos(gobj(), ((GtkPositionType)(pos)));
}

PositionType Scale::get_value_pos() const
{
  return ((PositionType)(gtk_scale_get_value_pos(const_cast<GtkScale*>(gobj()))));
}

Glib::RefPtr<Pango::Layout> Scale::get_layout()
{
  Glib::RefPtr<Pango::Layout> retvalue = Glib::wrap(gtk_scale_get_layout(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::Layout> Scale::get_layout() const
{
  return const_cast<Scale*>(this)->get_layout();
}

void Scale::get_layout_offsets(int& x, int& y) const
{
  gtk_scale_get_layout_offsets(const_cast<GtkScale*>(gobj()), &(x), &(y));
}

void Scale::add_mark(double value, PositionType position, const Glib::ustring& markup)
{
  gtk_scale_add_mark(gobj(), value, ((GtkPositionType)(position)), markup.c_str());
}

void Scale::clear_marks()
{
  gtk_scale_clear_marks(gobj());
}


Glib::SignalProxy1< Glib::ustring,double > Scale::signal_format_value()
{
  return Glib::SignalProxy1< Glib::ustring,double >(this, &Scale_signal_format_value_info);
}


Glib::PropertyProxy< int > Scale::property_digits() 
{
  return Glib::PropertyProxy< int >(this, "digits");
}

Glib::PropertyProxy_ReadOnly< int > Scale::property_digits() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "digits");
}

Glib::PropertyProxy< bool > Scale::property_draw_value() 
{
  return Glib::PropertyProxy< bool >(this, "draw-value");
}

Glib::PropertyProxy_ReadOnly< bool > Scale::property_draw_value() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "draw-value");
}

Glib::PropertyProxy< PositionType > Scale::property_value_pos() 
{
  return Glib::PropertyProxy< PositionType >(this, "value-pos");
}

Glib::PropertyProxy_ReadOnly< PositionType > Scale::property_value_pos() const
{
  return Glib::PropertyProxy_ReadOnly< PositionType >(this, "value-pos");
}


Glib::ustring Gtk::Scale::on_format_value(double value)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->format_value)
    return Glib::convert_const_gchar_ptr_to_ustring((*base->format_value)(gobj(),value));

  typedef Glib::ustring RType;
  return RType();
}

void Gtk::Scale::draw_value_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->draw_value)
  {
    (*base->draw_value)(gobj());
  }
}


} // namespace Gtk


namespace Glib
{

Gtk::VScale* wrap(GtkVScale* object, bool take_copy)
{
  return dynamic_cast<Gtk::VScale *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VScale_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VScale_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_vscale_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VScale_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VScale_Class::wrap_new(GObject* o)
{
  return manage(new VScale((GtkVScale*)(o)));

}


/* The implementation: */

VScale::VScale(const Glib::ConstructParams& construct_params)
:
  Gtk::Scale(construct_params)
{
  }

VScale::VScale(GtkVScale* castitem)
:
  Gtk::Scale((GtkScale*)(castitem))
{
  }

VScale::~VScale()
{
  destroy_();
}

VScale::CppClassType VScale::vscale_class_; // initialize static member

GType VScale::get_type()
{
  return vscale_class_.init().get_type();
}


GType VScale::get_base_type()
{
  return gtk_vscale_get_type();
}


} // namespace Gtk


namespace Glib
{

Gtk::HScale* wrap(GtkHScale* object, bool take_copy)
{
  return dynamic_cast<Gtk::HScale *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HScale_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HScale_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_hscale_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void HScale_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* HScale_Class::wrap_new(GObject* o)
{
  return manage(new HScale((GtkHScale*)(o)));

}


/* The implementation: */

HScale::HScale(const Glib::ConstructParams& construct_params)
:
  Gtk::Scale(construct_params)
{
  }

HScale::HScale(GtkHScale* castitem)
:
  Gtk::Scale((GtkScale*)(castitem))
{
  }

HScale::~HScale()
{
  destroy_();
}

HScale::CppClassType HScale::hscale_class_; // initialize static member

GType HScale::get_type()
{
  return hscale_class_.init().get_type();
}


GType HScale::get_base_type()
{
  return gtk_hscale_get_type();
}


} // namespace Gtk


