cmake_minimum_required(VERSION 3.6)
project(Decorator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Decorator/CaramelSauceDecorator.cpp
        Decorator/CaramelSauceDecorator.h
        Decorator/ChocolateIceCreamDecorator.cpp
        Decorator/ChocolateIceCreamDecorator.h
        Decorator/Component.cpp
        Decorator/Component.h
        Decorator/IceCream.cpp
        Decorator/IceCream.h
        Decorator/IceCreamDecorator.h
        Decorator/main.cpp
        Decorator/SprinklesDecorator.cpp
        Decorator/SprinklesDecorator.h)

add_executable(Decorator ${SOURCE_FILES})