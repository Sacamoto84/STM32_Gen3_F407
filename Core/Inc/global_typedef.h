#ifndef INC_GLOBAL_TYPEDEF_H_
#define INC_GLOBAL_TYPEDEF_H_

//* ┌ ┐ └ ┘├ ┤ ┬ ┴ ┼ ─ │
//┌─────────┬──────────────────────────────────────────┐
//│ typedef │                                          │
//└─────────┴──────────────────────────────────────────┤
	typedef char __attribute__((aligned (4))) char4; //│
//──────────────────────────────┬──────────────────────┤
	typedef struct            //│       Энкодер        │
	{                         //└──────────────────────┤
		uint8_t Left;                                //│
		uint8_t Right;                               //│
	}Encoder_typedef;                                //│
//─────────────────────────────────────────────────────┘

//───────────────────────────────────────────────────────────────────────────────────┤
//Создается для каждого файла в папке                                              //│
typedef struct                                                                     //│
{                                                                                  //│
 char  Name[16];    //Имя файла                                                    //│
 uint8_t  maxFileCount = 0;                                                        //│
} Dir_File_Info_Array;                                                             //│
//───────────────────────────────────────────────────────────────────────────────────┘

#endif /* INC_GLOBAL_TYPEDEF_H_ */
