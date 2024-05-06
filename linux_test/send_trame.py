import serial
import time

# Définit le port série et la vitesse de communication
port = "/dev/ttyUSB0"  # Modifiez le port en fonction de votre système d'exploitation
baudrate = 115200

# Initialise la liaison série
ser = serial.Serial(port, baudrate, timeout=1)

# Fonction pour envoyer une trame
def send_frame(variable, data):
    frame = "<" + variable + "," + str(data) + ">"
    ser.write(frame.encode())
    print("Trame envoyée :", frame)

# Boucle principale
if __name__ == "__main__":
    try:
        while True:
            variable = input("Entrez la variable (A, B, C, etc.) : ")
            data = input("Entrez les données : ")
            send_frame(variable, data)
            time.sleep(1)  # Attend une seconde avant de demander une nouvelle trame
    except KeyboardInterrupt:
        print("Arrêt du programme")
        ser.close()
