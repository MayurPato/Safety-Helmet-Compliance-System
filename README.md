# **Safety-Helmet-Compliance-System**
This project is a safety solution that uses YOLOv5's object detection capabilities to identify individuals not wearing helmets in a factory setting. When a safety violation is detected, through  Blynk API, the system uses a NodeMCU microcontroller to trigger safety alerts, including a buzzer and LED light, ensuring immediate and visible notifications. 

The YOLOv5 model was custom trained to specifically detect safety helmets. The model achieved a mAP50 accuracy of 61.50 % after being trained for 100 epochs. The final weights of the model were saved in "Model_weight.pt".

Dataset: https://www.kaggle.com/datasets/andrewmvd/hard-hat-detection
