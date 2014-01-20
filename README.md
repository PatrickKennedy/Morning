About
=====

Morning is a minimalistic calendar reminder that tailors the information provided about each event in an intelligent, meaningful way.

![Morning Screenshot]()

Getting Started
===============

Beyond loading the two skins, you need to open `./@Resources/Variables/UserVariables` and replace the example raw url with the private xml address from the Calendar Settings/Calendar Details of the calendar you wish to display.

*Note: If you're using the initial commit (i.e. not targeted for Rainmeter 3.1) you must change the %40 to an @ as the Time Measure chokes on it. String Measures are a gift from God and consume it without incident.*

It currently supports a single feed, however, there are ways of combining multiple feeds together (which is laregly what you'd have to do in Rainmeter's case).

Finally, as this is my first and only skin so far, I don't have plans to create an options menu at the moment.

What It Does
============

The core functionality is to take the next three events in your calendar up to 12 hours in advance and gives you relevant information. The first on the list will display how long until the next event, while the next two display the time the event begins.

There are many ideas I have to further extend this intelligence, but for now, I'm in love with the simplicity.

Screenshot
==========
![Morning Screenshot](http://i.imgur.com/XmUNhFF.jpg)
![Morning Screenshot Time Only](http://i.imgur.com/vFisBWq.jpg)

Further Reading
===============

What I've done here is made possible largely to the [Google Calendar API v2](https://developers.google.com/google-apps/calendar/v2/reference) Atom Reference. This API will be depreciated November 2014. I hope to have a solution to use v3 by that time (I use this skin daily), but they introduce some functionality that complicates the use in applications like this. If anyone has suggestions, feel free to let me know :)
