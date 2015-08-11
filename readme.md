### Sinhala Speech Recognition

This is a sinhala speech recognition application developed using pocketsphinx and QtSdk. 
i wrote this application to test the sinhala acoustic model which i have been training myself. 
The trained acoustic model, language model and the dictionary for sinhala language can be found inside
the ```models/sin-sl-v2``` directory. since this model has been trained with a small set of recordings 
of a one speaker, the speech recognition accuracy for other people are still pretty low. 
word list can be found in the dictionary file where ```models/sin-sl-v2/sinhala.dic```.

more on acousting model training can be found [here](http://cmusphinx.sourceforge.net/wiki/tutorialam)