import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gio
import os

class NetwaveWindow(Gtk.Window):

    # Main constructor - saying cuz I'm a noob!
    def __init__(self):
        
        Gtk.Window.__init__(self, title="Netwave")
        self.set_border_width(10)
        self.set_default_size(400, 200)

        # create a headerbar
        header = Gtk.HeaderBar()
        header.set_show_close_button(True)
        header.props.title = "Netwave" # The title for the headerbar
        self.set_titlebar(header) # sets the titlebar to be a headerbar

        # make a menu button
        self.menuButton = Gtk.Button()
        self.menuButton.connect("clicked", self.on_button_clicked)

        icon = Gio.ThemedIcon(name="open-menu")
        image = Gtk.Image.new_from_gicon(icon, Gtk.IconSize.BUTTON)

        self.menuButton.add(image)
        header.pack_end(self.menuButton) # put it near window controls



    # the button clicked is a widget type: print output
    def on_button_clicked(self, widget):
        pingFile = "/home/berk/🔨 Projects/netwave/resources/ping.txt" # read from this file
        temp = []
        with open(pingFile, "r") as fileToRead:
            for line in fileToRead:
                temp.append(line)
        # print the contents of temp        
        print(temp)
    
    
    
win = NetwaveWindow()
win.connect("destroy", Gtk.main_quit)
win.show_all()
Gtk.main()