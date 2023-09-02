import pyttsx3 

engine = pyttsx3.init('sapi5')
voice = engine.getProperty('voices')
# print(voice[1],id)

def speak(audio):
  def wishme():
    hour= int (datetime.datetime.now().hour)
    if hour>=0 and hour <=12:
        speak("good morning")
        
    elif hour >=12 and hour <=18:
            speak("good afternoon ")
    else:
            speak("good night")
engine.say('chetan is god audio')
engine.runAndWait()

if __name__== "__main__":
    speak("chetan is ")