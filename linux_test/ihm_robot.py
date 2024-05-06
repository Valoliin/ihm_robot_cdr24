import time
import subprocess
import serial

# Définit le port série et la vitesse de communication
port = "/dev/ttyUSB0"  # Modifiez le port en fonction de votre système d'exploitation
baudrate = 115200

# Initialise la liaison série
ser = serial.Serial(port, baudrate, timeout=1)

# Variable de contrôle pour activer ou désactiver la boucle principale
loop_active = True

# Fonction pour envoyer une trame
def send_frame(variable, data):
    frame = "<" + variable + "," + str(data) + ">"
    ser.write(frame.encode())
    print("Trame envoyée :", frame)

# Fonction pour obtenir l'adresse IP d'une interface
def get_ip_address(interface):
    try:
        if interface == "wlan0":
            variable = "W"
            ip_address = subprocess.check_output(['hostname', '-I', '-I']).decode().split()[0]
            send_frame(variable, ip_address)
            time.sleep(1)  # Attend une seconde avant de demander une nouvelle trame
        elif interface == "eth0":
            variable = "E"
            ip_address = subprocess.check_output(['hostname', '-I', '-I']).decode().split()[1]
            send_frame(variable, ip_address)
            time.sleep(1)  # Attend une seconde avant de demander une nouvelle trame

    except:
        variable = "I"
        ip_address = "XXX.XXX.XXX.XXX"
        send_frame(variable, ip_address)
        time.sleep(1)  # Attend une seconde avant de demander une nouvelle trame
    #return

# Fonction pour tester la présence d'un périphérique I2C
def test_i2c_address(address):
    # Votre code de test I2C ici
    # Retourne True si l'adresse est valide, False sinon
    return False

# Fonction pour vérifier la présence de /dev/ttyUSB0
def check_serial_device_0():
    variable = "L"
    try:
        with open('/dev/ttyUSB0', 'r') as f:
            data = "O"
            send_frame(variable, data)
            return "OK"
    except FileNotFoundError:
        data = "I"
        send_frame(variable, data)
        return "INACTIVE"

# Fonction pour vérifier la présence de /dev/ttyUSB1
#def check_serial_device_1():
    try:
        with open('/dev/ttyUSB1', 'r') as f:
            return "OK"
    except FileNotFoundError:
        return "INACTIVE"

# Fonction pour tester l'état d'une broche GPIO
def test_gpio_pin(pin):
    # Votre code de test GPIO ici
    # Retourne True si l'état est haut, False sinon
    return False


# Fonction pour lire les données série
# Fonction pour lire les données série
def read_serial_data():
    print("read_serial_data")
    time.sleep(2)
    data = ser.read_until(b'\r\n').decode().strip()
    if data:
        print("Données reçues:", data)
        return data
    else:
        print("Aucune donnée reçue")

# Fonction pour vérifier si des données série sont disponibles
def serial_data_available():
        try:
            with open('/dev/ttyUSB0', 'r') as f:
                return True
        except FileNotFoundError:
            print("Erreur lors de la lecture des données série : serial_data_available", str(e))
            return False
# Attente de 10 secondes après le démarrage
print("démarrage du programme")
time.sleep(1)
ser.flushInput()  # Nettoie le buffer d'entrée pour enlever les données résiduelles
# Boucle principale
while loop_active:
    # Test de l'adresse IP de wlan0 et eth0
    time.sleep(2)
    print("wlan0")
    get_ip_address("wlan0")
    time.sleep(2)
    print("eth0")
    get_ip_address("eth0")
    
    # Test de la présence de /dev/ttyUSB0
    time.sleep(2)
    print("USB0")
    check_serial_device_0()
    
    # Test de l'état d'une broche GPIO
    print("GPIO")
    test_gpio_pin(17)  # Remplacer par le numéro de votre broche GPIO

    # Vérifier si des données série sont disponibles
    print("loop")
    if serial_data_available():
        print("SERIAL_DATA_AVAILABLE")
        # Lire la trame série
        serial_data = read_serial_data()
        print(serial_data)
        # Vérifier si la trame est égale à "<START>"
        if serial_data == "<START>":
            print("START")
            # Lancer un programme Python en arrière-plan
            #subprocess.Popen(["python3", "mon_programme.py"])
            loop_active = False
        elif serial_data == "<STOP>":
            print("STOP")
            # Arrêter le programme Python en arrière-plan
            #subprocess.Popen(["pkill", "-f", "mon_programme.py"])
            loop_active = True
    # Attente avant la prochaine itération
    time.sleep(1)  # Vous pouvez ajuster cette durée selon vos besoins
