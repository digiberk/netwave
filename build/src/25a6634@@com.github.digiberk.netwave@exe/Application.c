/* Application.c generated by valac 0.44.7, the Vala compiler
 * generated from Application.vala, do not modify */

/*
 * Application.vala
 * Class constructor only called the first time the program runs
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
typedef struct _ApplicationPrivate ApplicationPrivate;
enum  {
	APPLICATION_0_PROPERTY,
	APPLICATION_NUM_PROPERTIES
};
static GParamSpec* application_properties[APPLICATION_NUM_PROPERTIES];

#define NETWAVE_TYPE_WINDOW (netwave_window_get_type ())
#define NETWAVE_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), NETWAVE_TYPE_WINDOW, NetwaveWindow))
#define NETWAVE_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), NETWAVE_TYPE_WINDOW, NetwaveWindowClass))
#define NETWAVE_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NETWAVE_TYPE_WINDOW))
#define NETWAVE_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NETWAVE_TYPE_WINDOW))
#define NETWAVE_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), NETWAVE_TYPE_WINDOW, NetwaveWindowClass))

typedef struct _NetwaveWindow NetwaveWindow;
typedef struct _NetwaveWindowClass NetwaveWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Application {
	GtkApplication parent_instance;
	ApplicationPrivate * priv;
};

struct _ApplicationClass {
	GtkApplicationClass parent_class;
};

static gpointer application_parent_class = NULL;

GType application_get_type (void) G_GNUC_CONST;
Application* application_new (void);
Application* application_construct (GType object_type);
static void application_real_activate (GApplication* base);
GType netwave_window_get_type (void) G_GNUC_CONST;
NetwaveWindow* netwave_window_new (Application* app);
NetwaveWindow* netwave_window_construct (GType object_type,
                                         Application* app);

Application*
application_construct (GType object_type)
{
	Application * self = NULL;
#line 10 "../src/Application.vala"
	self = (Application*) g_object_new (object_type, "application-id", "com.github.digiberk.netwave", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 9 "../src/Application.vala"
	return self;
#line 69 "Application.c"
}

Application*
application_new (void)
{
#line 9 "../src/Application.vala"
	return application_construct (TYPE_APPLICATION);
#line 77 "Application.c"
}

static void
application_real_activate (GApplication* base)
{
	Application * self;
	NetwaveWindow* window = NULL;
	NetwaveWindow* _tmp0_;
#line 16 "../src/Application.vala"
	self = (Application*) base;
#line 17 "../src/Application.vala"
	_tmp0_ = netwave_window_new (self);
#line 17 "../src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 17 "../src/Application.vala"
	window = _tmp0_;
#line 18 "../src/Application.vala"
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) window);
#line 16 "../src/Application.vala"
	_g_object_unref0 (window);
#line 98 "Application.c"
}

static void
application_class_init (ApplicationClass * klass,
                        gpointer klass_data)
{
#line 6 "../src/Application.vala"
	application_parent_class = g_type_class_peek_parent (klass);
#line 6 "../src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) application_real_activate;
#line 109 "Application.c"
}

static void
application_instance_init (Application * self,
                           gpointer klass)
{
}

GType
application_get_type (void)
{
	static volatile gsize application_type_id__volatile = 0;
	if (g_once_init_enter (&application_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Application), 0, (GInstanceInitFunc) application_instance_init, NULL };
		GType application_type_id;
		application_type_id = g_type_register_static (gtk_application_get_type (), "Application", &g_define_type_info, 0);
		g_once_init_leave (&application_type_id__volatile, application_type_id);
	}
	return application_type_id__volatile;
}
