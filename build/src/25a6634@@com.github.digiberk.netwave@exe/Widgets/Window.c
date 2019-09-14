/* Window.c generated by valac 0.44.7, the Vala compiler
 * generated from Window.vala, do not modify */

/*
 * Window.vala
 * Window activities and controls belong in this file. Also schemas...
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>
#include <gdk/gdk.h>

#define NETWAVE_TYPE_WINDOW (netwave_window_get_type ())
#define NETWAVE_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), NETWAVE_TYPE_WINDOW, NetwaveWindow))
#define NETWAVE_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), NETWAVE_TYPE_WINDOW, NetwaveWindowClass))
#define NETWAVE_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NETWAVE_TYPE_WINDOW))
#define NETWAVE_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NETWAVE_TYPE_WINDOW))
#define NETWAVE_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), NETWAVE_TYPE_WINDOW, NetwaveWindowClass))

typedef struct _NetwaveWindow NetwaveWindow;
typedef struct _NetwaveWindowClass NetwaveWindowClass;
typedef struct _NetwaveWindowPrivate NetwaveWindowPrivate;
enum  {
	NETWAVE_WINDOW_0_PROPERTY,
	NETWAVE_WINDOW_STACK_PROPERTY,
	NETWAVE_WINDOW_NUM_PROPERTIES
};
static GParamSpec* netwave_window_properties[NETWAVE_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;

#define NETWAVE_TYPE_HEADER_BAR (netwave_header_bar_get_type ())
#define NETWAVE_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), NETWAVE_TYPE_HEADER_BAR, NetwaveHeaderBar))
#define NETWAVE_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), NETWAVE_TYPE_HEADER_BAR, NetwaveHeaderBarClass))
#define NETWAVE_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NETWAVE_TYPE_HEADER_BAR))
#define NETWAVE_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NETWAVE_TYPE_HEADER_BAR))
#define NETWAVE_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), NETWAVE_TYPE_HEADER_BAR, NetwaveHeaderBarClass))

typedef struct _NetwaveHeaderBar NetwaveHeaderBar;
typedef struct _NetwaveHeaderBarClass NetwaveHeaderBarClass;

struct _NetwaveWindow {
	GtkApplicationWindow parent_instance;
	NetwaveWindowPrivate * priv;
	GSettings* settings;
};

struct _NetwaveWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _NetwaveWindowPrivate {
	GtkStack* _stack;
};

static gint NetwaveWindow_private_offset;
static gpointer netwave_window_parent_class = NULL;

GType netwave_window_get_type (void) G_GNUC_CONST;
GType application_get_type (void) G_GNUC_CONST;
NetwaveWindow* netwave_window_new (Application* app);
NetwaveWindow* netwave_window_construct (GType object_type,
                                         Application* app);
gboolean netwave_window_before_destroy (NetwaveWindow* self);
GtkStack* netwave_window_get_stack (NetwaveWindow* self);
void netwave_window_set_stack (NetwaveWindow* self,
                               GtkStack* value);
static GObject * netwave_window_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties);
static gboolean _netwave_window___lambda4_ (NetwaveWindow* self,
                                     GdkEventAny* e);
static gboolean __netwave_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                              GdkEventAny* event,
                                                              gpointer self);
GType netwave_header_bar_get_type (void) G_GNUC_CONST;
NetwaveHeaderBar* netwave_header_bar_new (NetwaveWindow* window);
NetwaveHeaderBar* netwave_header_bar_construct (GType object_type,
                                                NetwaveWindow* window);
static void netwave_window_finalize (GObject * obj);
static void _vala_netwave_window_get_property (GObject * object,
                                        guint property_id,
                                        GValue * value,
                                        GParamSpec * pspec);
static void _vala_netwave_window_set_property (GObject * object,
                                        guint property_id,
                                        const GValue * value,
                                        GParamSpec * pspec);

static inline gpointer
netwave_window_get_instance_private (NetwaveWindow* self)
{
	return G_STRUCT_MEMBER_P (self, NetwaveWindow_private_offset);
}

NetwaveWindow*
netwave_window_construct (GType object_type,
                          Application* app)
{
	NetwaveWindow * self = NULL;
#line 10 "../src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 11 "../src/Widgets/Window.vala"
	self = (NetwaveWindow*) g_object_new (object_type, "application", app, NULL);
#line 10 "../src/Widgets/Window.vala"
	return self;
#line 119 "Window.c"
}

NetwaveWindow*
netwave_window_new (Application* app)
{
#line 10 "../src/Widgets/Window.vala"
	return netwave_window_construct (NETWAVE_TYPE_WINDOW, app);
#line 127 "Window.c"
}

gboolean
netwave_window_before_destroy (NetwaveWindow* self)
{
	gboolean result = FALSE;
	gint width = 0;
	gint height = 0;
	gint x = 0;
	gint y = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	GSettings* _tmp4_;
	GSettings* _tmp5_;
	GSettings* _tmp6_;
	GSettings* _tmp7_;
#line 69 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 72 "../src/Widgets/Window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 72 "../src/Widgets/Window.vala"
	width = _tmp0_;
#line 72 "../src/Widgets/Window.vala"
	height = _tmp1_;
#line 73 "../src/Widgets/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 73 "../src/Widgets/Window.vala"
	x = _tmp2_;
#line 73 "../src/Widgets/Window.vala"
	y = _tmp3_;
#line 75 "../src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 75 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp4_, "pos-x", x);
#line 76 "../src/Widgets/Window.vala"
	_tmp5_ = self->settings;
#line 76 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp5_, "pos-y", y);
#line 77 "../src/Widgets/Window.vala"
	_tmp6_ = self->settings;
#line 77 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp6_, "window-width", width);
#line 78 "../src/Widgets/Window.vala"
	_tmp7_ = self->settings;
#line 78 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp7_, "window-height", height);
#line 80 "../src/Widgets/Window.vala"
	result = FALSE;
#line 80 "../src/Widgets/Window.vala"
	return result;
#line 180 "Window.c"
}

GtkStack*
netwave_window_get_stack (NetwaveWindow* self)
{
	GtkStack* result;
	GtkStack* _tmp0_;
#line 9 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "../src/Widgets/Window.vala"
	_tmp0_ = self->priv->_stack;
#line 9 "../src/Widgets/Window.vala"
	result = _tmp0_;
#line 9 "../src/Widgets/Window.vala"
	return result;
#line 196 "Window.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 9 "../src/Widgets/Window.vala"
	return self ? g_object_ref (self) : NULL;
#line 204 "Window.c"
}

void
netwave_window_set_stack (NetwaveWindow* self,
                          GtkStack* value)
{
#line 9 "../src/Widgets/Window.vala"
	g_return_if_fail (self != NULL);
#line 9 "../src/Widgets/Window.vala"
	if (netwave_window_get_stack (self) != value) {
#line 215 "Window.c"
		GtkStack* _tmp0_;
#line 9 "../src/Widgets/Window.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 9 "../src/Widgets/Window.vala"
		_g_object_unref0 (self->priv->_stack);
#line 9 "../src/Widgets/Window.vala"
		self->priv->_stack = _tmp0_;
#line 9 "../src/Widgets/Window.vala"
		g_object_notify_by_pspec ((GObject *) self, netwave_window_properties[NETWAVE_WINDOW_STACK_PROPERTY]);
#line 225 "Window.c"
	}
}

static gboolean
_netwave_window___lambda4_ (NetwaveWindow* self,
                            GdkEventAny* e)
{
	gboolean result = FALSE;
#line 26 "../src/Widgets/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 27 "../src/Widgets/Window.vala"
	result = netwave_window_before_destroy (self);
#line 27 "../src/Widgets/Window.vala"
	return result;
#line 240 "Window.c"
}

static gboolean
__netwave_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                     GdkEventAny* event,
                                                     gpointer self)
{
	gboolean result;
	result = _netwave_window___lambda4_ ((NetwaveWindow*) self, event);
#line 26 "../src/Widgets/Window.vala"
	return result;
#line 252 "Window.c"
}

static GObject *
netwave_window_constructor (GType type,
                            guint n_construct_properties,
                            GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	NetwaveWindow * self;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
	GSettings* _tmp2_;
	GSettings* _tmp3_;
	GSettings* _tmp4_;
	GtkStack* _tmp5_;
	GtkStack* _tmp6_;
	GtkStack* _tmp7_;
	GtkGrid* pingTool = NULL;
	GtkGrid* _tmp8_;
	GtkButton* pingButton = NULL;
	GtkButton* _tmp9_;
	GtkGrid* _tmp10_;
	GtkLabel* _tmp11_;
	GtkLabel* _tmp12_;
	GtkGrid* _tmp13_;
	GtkEntry* _tmp14_;
	GtkEntry* _tmp15_;
	GtkGrid* _tmp16_;
	GtkButton* _tmp17_;
	GtkGrid* tracerouteTool = NULL;
	GtkGrid* _tmp18_;
	GtkButton* tracerouteButton = NULL;
	GtkButton* _tmp19_;
	GtkGrid* _tmp20_;
	GtkLabel* _tmp21_;
	GtkLabel* _tmp22_;
	GtkGrid* _tmp23_;
	GtkEntry* _tmp24_;
	GtkEntry* _tmp25_;
	GtkGrid* _tmp26_;
	GtkButton* _tmp27_;
	GtkStack* _tmp28_;
	GtkGrid* _tmp29_;
	GtkStack* _tmp30_;
	GtkGrid* _tmp31_;
	GtkStack* _tmp32_;
	NetwaveHeaderBar* headerbar = NULL;
	NetwaveHeaderBar* _tmp33_;
	NetwaveHeaderBar* _tmp34_;
#line 16 "../src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (netwave_window_parent_class);
#line 16 "../src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 16 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, NETWAVE_TYPE_WINDOW, NetwaveWindow);
#line 18 "../src/Widgets/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 19 "../src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 350, 80);
#line 21 "../src/Widgets/Window.vala"
	_tmp0_ = g_settings_new ("com.github.digiberk.netwave");
#line 21 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 21 "../src/Widgets/Window.vala"
	self->settings = _tmp0_;
#line 23 "../src/Widgets/Window.vala"
	_tmp1_ = self->settings;
#line 23 "../src/Widgets/Window.vala"
	_tmp2_ = self->settings;
#line 23 "../src/Widgets/Window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp1_, "pos-x"), g_settings_get_int (_tmp2_, "pos-x"));
#line 24 "../src/Widgets/Window.vala"
	_tmp3_ = self->settings;
#line 24 "../src/Widgets/Window.vala"
	_tmp4_ = self->settings;
#line 24 "../src/Widgets/Window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp3_, "window-width"), g_settings_get_int (_tmp4_, "window-height"));
#line 26 "../src/Widgets/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __netwave_window___lambda4__gtk_widget_delete_event, self, 0);
#line 30 "../src/Widgets/Window.vala"
	_tmp5_ = (GtkStack*) gtk_stack_new ();
#line 30 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp5_);
#line 30 "../src/Widgets/Window.vala"
	_tmp6_ = _tmp5_;
#line 30 "../src/Widgets/Window.vala"
	netwave_window_set_stack (self, _tmp6_);
#line 30 "../src/Widgets/Window.vala"
	_g_object_unref0 (_tmp6_);
#line 31 "../src/Widgets/Window.vala"
	_tmp7_ = self->priv->_stack;
#line 31 "../src/Widgets/Window.vala"
	g_object_set ((GtkWidget*) _tmp7_, "expand", TRUE, NULL);
#line 36 "../src/Widgets/Window.vala"
	_tmp8_ = (GtkGrid*) gtk_grid_new ();
#line 36 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp8_);
#line 36 "../src/Widgets/Window.vala"
	pingTool = _tmp8_;
#line 37 "../src/Widgets/Window.vala"
	_tmp9_ = (GtkButton*) gtk_button_new_with_label ("Ping");
#line 37 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp9_);
#line 37 "../src/Widgets/Window.vala"
	pingButton = _tmp9_;
#line 38 "../src/Widgets/Window.vala"
	_tmp10_ = pingTool;
#line 38 "../src/Widgets/Window.vala"
	_tmp11_ = (GtkLabel*) gtk_label_new ("Ping Page");
#line 38 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp11_);
#line 38 "../src/Widgets/Window.vala"
	_tmp12_ = _tmp11_;
#line 38 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp10_, (GtkWidget*) _tmp12_, 1, 1, 1, 1);
#line 38 "../src/Widgets/Window.vala"
	_g_object_unref0 (_tmp12_);
#line 39 "../src/Widgets/Window.vala"
	_tmp13_ = pingTool;
#line 39 "../src/Widgets/Window.vala"
	_tmp14_ = (GtkEntry*) gtk_entry_new ();
#line 39 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp14_);
#line 39 "../src/Widgets/Window.vala"
	_tmp15_ = _tmp14_;
#line 39 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp13_, (GtkWidget*) _tmp15_, 1, 2, 1, 1);
#line 39 "../src/Widgets/Window.vala"
	_g_object_unref0 (_tmp15_);
#line 40 "../src/Widgets/Window.vala"
	_tmp16_ = pingTool;
#line 40 "../src/Widgets/Window.vala"
	_tmp17_ = pingButton;
#line 40 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp16_, (GtkWidget*) _tmp17_, 2, 2, 1, 1);
#line 46 "../src/Widgets/Window.vala"
	_tmp18_ = (GtkGrid*) gtk_grid_new ();
#line 46 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp18_);
#line 46 "../src/Widgets/Window.vala"
	tracerouteTool = _tmp18_;
#line 47 "../src/Widgets/Window.vala"
	_tmp19_ = (GtkButton*) gtk_button_new_with_label ("Run");
#line 47 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp19_);
#line 47 "../src/Widgets/Window.vala"
	tracerouteButton = _tmp19_;
#line 49 "../src/Widgets/Window.vala"
	_tmp20_ = tracerouteTool;
#line 49 "../src/Widgets/Window.vala"
	_tmp21_ = (GtkLabel*) gtk_label_new ("Traceroute Page");
#line 49 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp21_);
#line 49 "../src/Widgets/Window.vala"
	_tmp22_ = _tmp21_;
#line 49 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp20_, (GtkWidget*) _tmp22_, 1, 1, 1, 1);
#line 49 "../src/Widgets/Window.vala"
	_g_object_unref0 (_tmp22_);
#line 50 "../src/Widgets/Window.vala"
	_tmp23_ = tracerouteTool;
#line 50 "../src/Widgets/Window.vala"
	_tmp24_ = (GtkEntry*) gtk_entry_new ();
#line 50 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp24_);
#line 50 "../src/Widgets/Window.vala"
	_tmp25_ = _tmp24_;
#line 50 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp23_, (GtkWidget*) _tmp25_, 1, 2, 1, 1);
#line 50 "../src/Widgets/Window.vala"
	_g_object_unref0 (_tmp25_);
#line 51 "../src/Widgets/Window.vala"
	_tmp26_ = tracerouteTool;
#line 51 "../src/Widgets/Window.vala"
	_tmp27_ = tracerouteButton;
#line 51 "../src/Widgets/Window.vala"
	gtk_grid_attach (_tmp26_, (GtkWidget*) _tmp27_, 2, 2, 1, 1);
#line 54 "../src/Widgets/Window.vala"
	_tmp28_ = self->priv->_stack;
#line 54 "../src/Widgets/Window.vala"
	_tmp29_ = pingTool;
#line 54 "../src/Widgets/Window.vala"
	gtk_stack_add_titled (_tmp28_, (GtkWidget*) _tmp29_, "pingTool", "Ping");
#line 55 "../src/Widgets/Window.vala"
	_tmp30_ = self->priv->_stack;
#line 55 "../src/Widgets/Window.vala"
	_tmp31_ = tracerouteTool;
#line 55 "../src/Widgets/Window.vala"
	gtk_stack_add_titled (_tmp30_, (GtkWidget*) _tmp31_, "tracerouteTool", "Traceroute");
#line 57 "../src/Widgets/Window.vala"
	_tmp32_ = self->priv->_stack;
#line 57 "../src/Widgets/Window.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp32_);
#line 61 "../src/Widgets/Window.vala"
	_tmp33_ = netwave_header_bar_new (self);
#line 61 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp33_);
#line 61 "../src/Widgets/Window.vala"
	headerbar = _tmp33_;
#line 62 "../src/Widgets/Window.vala"
	_tmp34_ = headerbar;
#line 62 "../src/Widgets/Window.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp34_);
#line 64 "../src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 16 "../src/Widgets/Window.vala"
	_g_object_unref0 (headerbar);
#line 16 "../src/Widgets/Window.vala"
	_g_object_unref0 (tracerouteButton);
#line 16 "../src/Widgets/Window.vala"
	_g_object_unref0 (tracerouteTool);
#line 16 "../src/Widgets/Window.vala"
	_g_object_unref0 (pingButton);
#line 16 "../src/Widgets/Window.vala"
	_g_object_unref0 (pingTool);
#line 16 "../src/Widgets/Window.vala"
	return obj;
#line 471 "Window.c"
}

static void
netwave_window_class_init (NetwaveWindowClass * klass,
                           gpointer klass_data)
{
#line 6 "../src/Widgets/Window.vala"
	netwave_window_parent_class = g_type_class_peek_parent (klass);
#line 6 "../src/Widgets/Window.vala"
	g_type_class_adjust_private_offset (klass, &NetwaveWindow_private_offset);
#line 6 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_netwave_window_get_property;
#line 6 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_netwave_window_set_property;
#line 6 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = netwave_window_constructor;
#line 6 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = netwave_window_finalize;
#line 6 "../src/Widgets/Window.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), NETWAVE_WINDOW_STACK_PROPERTY, netwave_window_properties[NETWAVE_WINDOW_STACK_PROPERTY] = g_param_spec_object ("stack", "stack", "stack", gtk_stack_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 492 "Window.c"
}

static void
netwave_window_instance_init (NetwaveWindow * self,
                              gpointer klass)
{
#line 6 "../src/Widgets/Window.vala"
	self->priv = netwave_window_get_instance_private (self);
#line 501 "Window.c"
}

static void
netwave_window_finalize (GObject * obj)
{
	NetwaveWindow * self;
#line 6 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, NETWAVE_TYPE_WINDOW, NetwaveWindow);
#line 8 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->settings);
#line 9 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->_stack);
#line 6 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (netwave_window_parent_class)->finalize (obj);
#line 516 "Window.c"
}

GType
netwave_window_get_type (void)
{
	static volatile gsize netwave_window_type_id__volatile = 0;
	if (g_once_init_enter (&netwave_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (NetwaveWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) netwave_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (NetwaveWindow), 0, (GInstanceInitFunc) netwave_window_instance_init, NULL };
		GType netwave_window_type_id;
		netwave_window_type_id = g_type_register_static (gtk_application_window_get_type (), "NetwaveWindow", &g_define_type_info, 0);
		NetwaveWindow_private_offset = g_type_add_instance_private (netwave_window_type_id, sizeof (NetwaveWindowPrivate));
		g_once_init_leave (&netwave_window_type_id__volatile, netwave_window_type_id);
	}
	return netwave_window_type_id__volatile;
}

static void
_vala_netwave_window_get_property (GObject * object,
                                   guint property_id,
                                   GValue * value,
                                   GParamSpec * pspec)
{
	NetwaveWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, NETWAVE_TYPE_WINDOW, NetwaveWindow);
#line 6 "../src/Widgets/Window.vala"
	switch (property_id) {
#line 6 "../src/Widgets/Window.vala"
		case NETWAVE_WINDOW_STACK_PROPERTY:
#line 6 "../src/Widgets/Window.vala"
		g_value_set_object (value, netwave_window_get_stack (self));
#line 6 "../src/Widgets/Window.vala"
		break;
#line 549 "Window.c"
		default:
#line 6 "../src/Widgets/Window.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/Widgets/Window.vala"
		break;
#line 555 "Window.c"
	}
}

static void
_vala_netwave_window_set_property (GObject * object,
                                   guint property_id,
                                   const GValue * value,
                                   GParamSpec * pspec)
{
	NetwaveWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, NETWAVE_TYPE_WINDOW, NetwaveWindow);
#line 6 "../src/Widgets/Window.vala"
	switch (property_id) {
#line 6 "../src/Widgets/Window.vala"
		case NETWAVE_WINDOW_STACK_PROPERTY:
#line 6 "../src/Widgets/Window.vala"
		netwave_window_set_stack (self, g_value_get_object (value));
#line 6 "../src/Widgets/Window.vala"
		break;
#line 575 "Window.c"
		default:
#line 6 "../src/Widgets/Window.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/Widgets/Window.vala"
		break;
#line 581 "Window.c"
	}
}

