/*
 * Application.vala
 * Class constructor only called the first time the program runs
 */

public class Application : Gtk.Application {

    // The class constructor only gets triggered only when called the first time
    public Application() {
        Object(
            application_id: "com.github.digiberk.netwave",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate() {
        var window = new Netwave.Window(this);
        add_window(window);

    }

}
