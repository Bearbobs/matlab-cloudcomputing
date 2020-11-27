# Matlab-CloudComputing


The project aims at deploying APIs for sensor data acquisition of smart-grid and then processing it in the cloud for real-time monitoring

## Setup

### Hardware:

* Arduino

* NodeMCU

*  Actual Smart-Grid or data simulation

### API/Backend

Its is based on my another project [stream-data](https://github.com/Bearbobs/stream-data).
Data Streaming application using Django Channels It provides API endpoints for your Django application that can push data to connected clients. Data is sent using the Server-Sent Events protocol (SSE), in which data is streamed over a never-ending HTTP response.
Used similar API to send data over to the ec2 instance and store it in a postgreSQL database to do mathematical calculations in matlab.

### Graphs/Visulisation

we used thingspeak platform for the same due to time restrictions.
Technologies like grafana and react-charts can also be used.
