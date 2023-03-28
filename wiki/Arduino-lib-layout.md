Arduino lib layout: A guide for new contributors

If you're a new contributor to an Arduino C++ library project, you might be
wondering how the library is laid out and what files are required. In this
guide, we'll answer some common questions about Arduino lib layout to help you
get started.

Library.properties file

One of the most important files in an Arduino library is the library.properties
file. This file contains metadata about the library, including its name, version
number, author, and description. This information is used by the Arduino IDE and
other tools to help users find and install the library.

More information

If you want to learn more about library.properties and how to create it, you can
check out the official Arduino documentation at
https://arduino.github.io/arduino-cli/latest/library-specification/#library-properties-file.
This page also covers other aspects of the library specification, such as the
directory structure and file naming conventions.

Compiled and copied files

When you compile an Arduino sketch that uses a library, the library code is
compiled along with the sketch code into a single binary file. However, not all
files in the library directory are compiled. Files with extensions like .h,
.hpp, and .cpp are compiled, but other files like documentation and examples are
not. These files are simply copied to the final sketch directory.

Public and private headers

In an Arduino library, some header files are intended to be used by external
code and are considered "public," while others are only used internally and are
considered "private" or "internal." Typically, public headers are placed in the
library's root directory, while private headers are placed in a subdirectory
called "src."

Testing code

If you want to test code that's supposed to run on an Arduino, you'll need to
set up a development environment that emulates an Arduino board. This can be
done using tools like the Arduino Simulator or the PlatformIO simulator. You can
also use real Arduino boards for testing, but this can be more time-consuming
and expensive.

Compatibility with PlatformIO

If you're using PlatformIO, you'll be happy to know that library.properties is
fully compatible with PlatformIO's library specification. This means that you
can easily publish your library to both the Arduino Library Manager and the
PlatformIO Library Registry.

Required files

At a minimum, an Arduino library needs two files: a header file (with extension
.h or .hpp) that defines the library's public interface, and a source file (with
extension .cpp) that implements the library's functionality. However, you'll
typically want to include additional files like documentation, examples, and a
library.properties file.

Publishing a library

To publish an Arduino library, you'll need to create a GitHub repository for the
library and upload the required files. Once you've done that, you can submit
your library to the Arduino Library Manager for inclusion in the official
Arduino library repository. You can also publish your library to the PlatformIO
Library Registry.

Naming convention

When naming your library, it's important to follow the Arduino library naming
convention. This convention states that library names should be short and
descriptive, with words separated by underscores. For example, "WiFi101" and
"LiquidCrystal_I2C" are both valid library names.

Code conventions

Finally, it's worth noting that there are no specific code conventions that all
Arduino libraries must follow. However, it's generally a good idea to follow
standard C++ coding conventions, such as using namespaces and avoiding global
variables. Additionally, you may want to include documentation and examples to
help users understand how to use your library.
