# TouchDesigner Workshop

Welcome to my TouchDesigner Workshop. In this course you will be learning some basic functionality of TouchDesigner.

TouchDesigner is a node based visual programming interface. So "apps" are not written with code, but by connecting nodes with each other. It already ships with a lot of functionality. There are nodes for common media communication protocols as well as a powerful 3D Rendering Pipeline.

Furthermore TouchDesigner supports the scripting language Python and everything inside TouchDesigner is programable with it.

To get a sense for the possibilities of TouchDesigner, i made this little overview:

- Generative Design ( Parametric Design, Noise )
- ( Network ) Protokols ( DMX, ARTNET, OSC, MIDI )
- 3D ( Vertex Operations, Shading, Materials )
- Shader ( 2D Effects )
- Interactivity ( Sensors, Arduino )
- User Interfaces ( GUI Building, Binding )
- Web Technologies ( Websockets, Webrender )
- Pointclouds ( Kinect, 3D Cameras )
- Audio ( Analyses, Design, Reactivity )
- VR ( Oculus, Vive, Open VR )
- Interoperability with other Software ( SYPHON Texture Sharing, Unity, Blender, Ableton Link )

But because TouchDesigner lets you program everthing, the possibilities are not tied to these usecases. Yet TouchDesigner has a focus on "multimedia programming".

## Introduction

In the following section you will find some useful info about TouchDesigner. I tried to focus on some basic points. But there are good resources from Derivative ( The company developing TouchDesigner ) as well, that will help you if this document is not sufficient.

Here are some useful links:

[Derivative Website](https://www.derivative.ca)

[TouchDesigner User Guide](https://derivative.ca/UserGuide/)

[TouchDesigner Wiki](https://docs.derivative.ca/Main_Page)

[TouchDesigner Forum](https://forum.derivative.ca)

## The Interface

The Interface of TouchDesigner maybe looks a little antique, but has some very useful features like drag and drop etc.

First a little overview about the basics:

**Network**: This is where the Nodes are placed and connected, basically your canvas. A collection of Nodes is called network too.

**FPS**: This show you the current frames per second of TouchDesigner. TouchDesigner always tries to achieve the set FPS for the project. But should your Network need more performance ( because e.g. your computer is not capable enough ), then TouchDesigner will drop frames

**Timeline**: The Timeline can be used to animate things, but it also controls TouchDesigner Main Loop. Stopping the Timeline will stop TouchDesigner calculating anything.

**Parameters**: The Parameters show the settings per Node. They differ from Node to Node.

**Current Path**: Shows the path of the current position in the project. CAn be used to navigate.

![Interface Overview](./images/interface.png)

###
