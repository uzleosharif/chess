# chess


## Design
the app is design in a multi-layer function (User -> GUI -> Engine) and keeping modularity in mind i.e. these layers 
are sufficiently isolated. The goal is to be able to easily plug-and-play GUI or Engine without breakign the codebase.
For example, the engine could work with any UI (not just GUI) like console-based cli. Similarly, the GUI can hook 
with any other engine in future.

First we try out simple multi-threaded approach. A main thread (QtApplication) that spawns the GUI thread and the Engine
thread. This leads to better separation-of-concerns and responsive code.