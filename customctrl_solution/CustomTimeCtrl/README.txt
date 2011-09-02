Solution is building customtimectrl and customtimectrld, directly in the QT plugins/designer directory, so you dont need to do anything.
On the project using the plugin, you must:
- add the include path of this project to the include path of the project
- add $(QTDIR)\plugins\designer to the library path
- add customtimectrl.lib to the libraries
- copy dlls to the path of the application

And everyting should be fine and the widget should "magically" appear on the designer!
Have fun!!! :-))

TODO:
- widget must make an insertion on table X, of:
location, dt utc, dt_localtime (directly), dt_type
and then return the id of the inserted date to the current record