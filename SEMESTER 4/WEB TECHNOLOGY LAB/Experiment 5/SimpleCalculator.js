const readlineSync = require('readline-sync');

function calculator(operation, num1, num2) {
  switch (operation) {
    case 'add':
      return num1 + num2;
    case 'subtract':
      return num1 - num2;
    case 'multiply':
      return num1 * num2;
    case 'divide':
      if (num2 === 0) {
        throw new Error('Division by zero is not allowed');
      }
      return num1 / num2;
    default:
      throw new Error('Invalid operation');
  }
}

const operation = readlineSync.question('Enter the operation (add, subtract, multiply, divide): ');
const num1 = parseFloat(readlineSync.question('Enter the first number: '));
const num2 = parseFloat(readlineSync.question('Enter the second number: '));

try {
    const result = calculator(operation, num1, num2);
    console.log(`The result of the ${operation} operation is: ${result}`);
  } catch (error) {
    console.error(error.message);
  }
  