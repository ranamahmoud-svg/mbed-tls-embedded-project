/*
 * TWI_interface.h
 *
 * Created: 9/24/2023 2:46:45 PM
 *  Author: Kareem Hussein
 */ 


#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_


void TWI_voidInitMaster           (u8 Copy_u8Add);
void TWI_voidSendStartCondition   (void);
void TWI_voidSendRepStartCondition(void);
void TWI_voidSendStopCondition    (void);
void TWI_voidSendSlaveAddWithWrite(u8 Copy_u8SlaveAdd);
void TWI_voidSendSlaveAddWithRead (u8 Copy_u8SlaveAdd);
void TWI_voidSendMasterDataByte   (u8 Copy_u8TxData);
void TWI_voidRecieveMasterDataByte(u8* Copy_pu8RxData);


#endif /* TWI_INTERFACE_H_ */