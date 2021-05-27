#include "ntddk.h"
VOID UnDriver(PDRIVER_OBJECT driver)
{
	DbgPrint(("uninstall driver is ok \n"));
}

NTSTATUS DriverEntry(IN PDRIVER_OBJECT Driver, PUNICODE_STRING Regitsr)
{
	DbgPrint(("hell lyshark \n"));
	Driver->DriverUnload =UnDriver;
	return STATUS_SUCCESS;
}