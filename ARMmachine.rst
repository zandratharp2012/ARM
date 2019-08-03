..  _ARM:

Machine Simulator  
#################

Below is a description of the function desired. We are working with machine language and translating to C++ in order to simulate a CPU. 

..  image:: https://github.com/zandratharp2012/ARM/blob/master/Images/ARMproject.JPG
    :scale: 50%

..  image:: https://github.com/zandratharp2012/ARM/blob/master/Images/ARMproject2.JPG
    :scale: 50%


Problem Statement Outline
*************************

Below is an outline of the machine being constructed by Major Tom: 

..  image:: https://github.com/zandratharp2012/ARM.git/blob/master/Images/Outline.JPG
    :scale: 50%

Machine Diagrams
****************

Fetch
=====

The fetch process begins with the following code:

.. code-block:: c++

  std::string input; 
  std::cout << "Please enter an expression: ";
  getline(std::cin, input);
  key = input[exp];
  while(key != '\0')

The user enters information and the machine then fetches the information that was input by the user.
  
..  image:: https://github.com/zandratharp2012/ARM.git/blob/master/Images/Fetch.JPG
    :scale: 50%

Decode
======

The decode process begins after the input during the loop to determine what values are going to be executed and stored such as the following code:

.. code-block:: c++

  if(isOperand(key))
  {operand = key;}
  else if (isInteger(key))
  
..  image:: https://github.com/zandratharp2012/ARM.git/blob/master/Images/Decode.PNG
    :scale: 50%

Execute
=======

The execute process begins during the switch statement such as the following code:

.. code-block:: c++

  switch(operand)
  {
	case '+':
        {
         	reg1 = add(reg1,reg2);
                break;
        }
        case '-':
        {
        	reg1 = sub(reg1,reg2);
        	break;
        }
   }

..  image:: https://github.com/zandratharp2012/ARM.git/blob/master/Images/Execute.PNG
    :scale: 50%

Store
=====

The store process takes place when values are stored in the array when the user enters the expression such as the following code:

.. code-block:: c++

  ++exp;
  key = input[exp];

..  image:: https://github.com/zandratharp2012/ARM.git/blob/master/Images/Store.PNG
    :scale: 50%

Improvements After First Attempt
********************************

After working through the design, I would perhaps improve the code by adding a function in order to ensure that the user only inputs the desired expression and not undesired symbols. There could also be another function that detects the number of symbols against numbers to ensure the expression is in the correct form. 