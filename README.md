Ascii2BinString
===============
This Android application allows the user to enter an ascii character text string and press a button 
to convert each character to its 8 bit binary representation.  The user may also enter binary that 
has a total bit length that divides evenly by 8 and have the app (try) to convert it to ascii characters.
Only the total bit length is checked, so wacky results are possible if correct length but random content
binary strings are entered.  Nothing is executed of course, so no actual danger beyond a possible force-close
if the app tries to display an unsupported char value.  The actual conversion work is done in the native
shared object library, and the calls to native code are made on the AsyncTask thread for a combination of
simple offloading of complex tasks from the main/UI thread and ease of communication back to the UI thread once
the native functions return their values.

The app's main purpose is to showcase custom view hierarchy configuration, use of native code via JNI 
for complex processes, how to extend AsyncTask to customize the processing of complex tasks
off the main/UI thread, and how to communicate results back to views to update the UI thread once
answers are ready from the native lib.

TODOs:
1. Add the tutorial on binary conversion
2. Add octal, hex, and base64 encoding options
3. Let the user select areas of text and assign an ecoding model to each individually, then run the
   conversions all at once.
