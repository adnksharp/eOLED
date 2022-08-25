# Use OLED display with nodeMCU ESP8266

[![292081783-528970082335709-4891849671251646937-n.png](https://i.postimg.cc/mD6LgdDm/292081783-528970082335709-4891849671251646937-n.png)](https://postimg.cc/mzCfdy79)

Usar pantalla OLED con nodeMCU ESP8266 y librerías de Adafruit.

## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- Diplay OLED.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).
- Librerías `Wire`, `Adafruit_GFX` y `Adafruit_SSD1306`.

## Funcionamiento
### Variables
- `SCREEN_WIDTH` y `SCREEN_HEIGHT`: Ancho y alto de la pantalla.
- `display`: alias para la pantalla.

### Funcionamiento
Usando la opción `begin` se inicializa la pantalla OLED.
- `clearDisplay` permite limpiar lo que se encuentra en la pantalla.
- `setCursor` establece las cordenadas `X` y `Y` desde donde se empezará a escribir en la pantalla.
- `println` establece el texto que se imprimirá.
- `display` imprime en la pantalla.

###### Librerias: **Adafruit GFX** y **Adafruit SSD1306**.
