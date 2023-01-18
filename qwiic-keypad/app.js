const KEYPAD_ID = 0x00
const KEYPAD_VERSION1 = 0x01
const KEYPAD_VERSION2 =  0x02
const KEYPAD_BUTTON = 0x03
const KEYPAD_TIME_MSB = 0x04
const KEYPAD_TIME_LSB =  0x05
const KEYPAD_UPDATE_FIFO =  0x06
const KEYPAD_CHANGE_ADDRESS = 0x07

const QWIIC_KEYPAD_ADDR = 0x4B

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms))
}

const i2c = require('i2c-bus')

const run = async () => {
	const i2c1 = i2c.openSync(1)
	
	// ---- trap the SIGINT and reset before exit
    process.on('SIGINT', function () {
	  i2c1.closeSync()
      process.nextTick(function () { 
		  process.exit(0) 
	  })
    })
		
	await sleep(1000)

	while (true) {
		try {
			i2c1.writeByteSync(QWIIC_KEYPAD_ADDR, KEYPAD_UPDATE_FIFO, 0x01)
	        await sleep(50)
	        const button = i2c1.readByteSync(QWIIC_KEYPAD_ADDR, KEYPAD_BUTTON)
	        await sleep(50)
	     	if (button != 0) console.log(button)
				
		} catch (e) {
			console.error(e.name)
		}		
	
	}
	
}

run()
