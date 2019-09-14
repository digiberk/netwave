/*
 * Window.vala
 * Window activities and controls belong in this file. Also schemas...
 */

public class Netwave.Window : Gtk.ApplicationWindow {

    public GLib.Settings settings;
    public Gtk.Stack stack { get; set; }
    public Window(Application app) {
        Object(
            application: app
        );
    }

    construct {

        window_position = Gtk.WindowPosition.CENTER;
        set_default_size(350, 80); // Set default size of the window to open (in pixels)

        settings = new GLib.Settings("com.github.digiberk.netwave");

        move(settings.get_int ("pos-x"), settings.get_int ("pos-x"));
        resize(settings.get_int ("window-width"), settings.get_int ("window-height"));

        delete_event.connect(e => {
            return before_destroy();
        });

        stack = new Gtk.Stack();
        stack.expand = true;


        // Button : Stack Switcher : Definitions & Saved
        /* PING PAGE */
        var pingTool = new Gtk.Grid();
        var pingButton = new Gtk.Button.with_label("Ping");

        pingTool.attach(new Gtk.Label("Ping Page"), 1, 1);
        pingTool.attach(new Gtk.Entry(), 1, 2);
        pingTool.attach(pingButton, 2, 2);




        /* TRACEROUTE PAGE */
        var tracerouteTool = new Gtk.Grid();
        var tracerouteButton = new Gtk.Button.with_label("Run");

        tracerouteTool.attach(new Gtk.Label("Traceroute Page"), 1, 1);
        tracerouteTool.attach(new Gtk.Entry(), 1, 2);
        tracerouteTool.attach(tracerouteButton, 2, 2);


        stack.add_titled(pingTool, "pingTool", "Ping");
        stack.add_titled(tracerouteTool, "tracerouteTool", "Traceroute");

        add(stack);


        // HeaderBar Initialization
        var headerbar = new Netwave.HeaderBar(this);
        set_titlebar(headerbar);

        show_all();
    }

    // This method is designed to remember the window size & position when
    // closing the application.
    public bool before_destroy() {
        int width, height, x, y;

        get_size(out width, out height);
        get_position(out x, out y);

        settings.set_int("pos-x", x);
        settings.set_int("pos-y", y);
        settings.set_int("window-width", width);
        settings.set_int("window-height", height);

        return false;
    }

}
