import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class MyWindow(Gtk.Window):

    # Main constructor - saying cuz I'm a noob!
    def __init__(self):
        Gtk.Window.__init__(self, title="Hello GTK!")

        self.button = Gtk.Button(label="Click Here")
        self.button.connect("clicked", self.on_button_clicked)
        self.add(self.button)
    
    # the button clicked is a widget type
    def on_button_clicked(self, widget):
        print("Hello button...")
    
win = MyWindow()
win.connect("destroy", Gtk.main_quit)
win.show_all()
Gtk.main()