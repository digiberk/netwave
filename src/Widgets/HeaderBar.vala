/*
 * HeaderBar.vala
 * File for the header bar elements
 */


public class Netwave.HeaderBar : Gtk.HeaderBar {

    // Accessor from the window class
    public Netwave.Window main_window { get; construct;}

    public HeaderBar(Netwave.Window window) {
        Object(
            main_window: window
        );
    }

    construct {
        
        set_show_close_button(true);

        // Button : Add
        /*
        var save_button = new Gtk.Button.with_label("Save");
        save_button.get_style_context().add_class("suggested-action"); // Turns the button blue - stands out.
        save_button.valign = Gtk.Align.CENTER; // Make the button "center" aligned
        pack_start(save_button); // Put button at the start of the headerbar
        */
        
        // Button : Main Menu Button
        var menu_button = new Gtk.Button.from_icon_name("open-menu",
        Gtk.IconSize.SMALL_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;
        pack_end(menu_button); // Put button at the end of the headerbar

        // Button : Stack Switcher
        var stack_switcher = new Gtk.StackSwitcher();
        stack_switcher.stack = main_window.stack;

        set_custom_title(stack_switcher);

    }
}
