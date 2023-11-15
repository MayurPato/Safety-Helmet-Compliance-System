# Safety-helemt-detection-in-industrial-plants
This project is a safety solution that uses YOLOv5's object detection capabilities to identify individuals not wearing helmets in a factory setting. When a safety violation is detected, through  Blynk API, the system uses a NodeMCU microcontroller to trigger safety alerts, including a buzzer and LED light, ensuring immediate and visible notifications. 

The YOLOv5 model was custom trained to specifically detect safety helmets. The model achieved a mAP50 accuracy of 61.50 % after being trained for 100 epochs.

Dataset: https://www.kaggle.com/datasets/andrewmvd/hard-hat-detection
