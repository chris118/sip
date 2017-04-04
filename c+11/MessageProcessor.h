#pragma once
/*
ҵ��㴦��ӿڣ���sipЭ�����ȫ����
*/
#include"InviteMessage.h"
#include "RegisterMessage.h"
#include "AbstractMessageProcessor.h"
class AbstractSender;
class MessageProcessor :public AbstractMessageProcessor
{
public:
	MessageProcessor();
	MessageProcessor(AbstractSender *sender);
	~MessageProcessor();
	virtual void OnInviteMessage(const InviteMessage & msg);
	virtual void OnRegisterMessage(const RegisterMessage & msg);

private:
	AbstractSender *sender_;
};