# IOT
This shows use of cloud server to operate your IOT projects all over the internet..
We can use any free cloud serive provieder for projects like this for example arduino cloud, adafruit.io, blynk, home automation etc. 
or we can just create our owm web server and use port forwading method with some DNS servie provider like ngrok or portmap.
We can also connect the cloud platform with Google Assistant and operate with voice commands.

The project I make seems lame compared to what its actually capable of. We can stream live videos directly on our phone and fully operate our project from miles away.


Working.
--------
By using RemoteXY I created a simple app with some switches, we can add feedback systems as well like some analong data from sensor.
\You get a code for Arduino board and modify it as per your use.
I use a ESP32 so I had to use some additional libraries and RemoteXY library as well.
Then I connected that with RemoteXY's cloud server which provide a token. You can use the token and port no. on your remoteXY mobile application and simply
get the app interface. That's it you can now control your project from anywhere.


I tries port forwading medthod as well with ngrok but form IOT projects services like remoteXY are ways easier and provies a clean UI. 
