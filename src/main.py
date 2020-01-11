import os
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gio

class NetwaveWindow(Gtk.Window):

    # Main constructor - saying cuz I'm a noob!
    def __init__(self):
        
        Gtk.Window.__init__(self, title="Netwave")
        self.set_border_width(10)
        self.set_default_size(400, 200)

        # create a headerbar
        header = Gtk.HeaderBar()
        header.set_show_close_button(True)
        header.props.title="Netwave" # The title for the headerbar
        header.props.subtitle="Under Construction"
        
        self.set_titlebar(header) # sets the titlebar to be a headerbar

        ### make a menu button
        self.menuButton = Gtk.Button()
        self.menuButton.connect("clicked", self.on_button_clicked)

        icon = Gio.ThemedIcon(name="open-menu-symbolic")
        image = Gtk.Image.new_from_gicon(icon, Gtk.IconSize.BUTTON)

        self.menuButton.add(image)
        header.pack_end(self.menuButton) # put it near window controls
        

        ## add another box
        box = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL)
        Gtk.StyleContext.add_class(box.get_style_context(), "linked")

        self.clearButton = Gtk.Button(label="Clear")
        box.add(self.clearButton)
        
        header.pack_start(box)
        
        grid = Gtk.Grid()
        grid.set_column_spacing(5) # add some padding
        self.add(grid)

        self.entry = Gtk.Entry(placeholder_text="Enter an address")
        self.pingButton = Gtk.Button(label="Ping")
        self.outputField = Gtk.TextView()

        grid.add(self.entry)
        grid.attach(self.pingButton, 1, 0, 2, 1)
        grid.add(self.outputField)
        

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