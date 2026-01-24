#include "HbkItemObj_SaveItem.h"

UHbkItemObj_SaveItem::UHbkItemObj_SaveItem() {
    this->SaveAmount = 1;
    this->bSaveWithUniqueName = false;
}

bool UHbkItemObj_SaveItem::Invoke_SaveItem(AActor* SaveActor) {
    return false;
}

bool UHbkItemObj_SaveItem::Invoke_IsAlreadySave(AActor* SaveActor) {
    return false;
}

void UHbkItemObj_SaveItem::Invoke_GetSaveParam(AActor* SaveActor, FName& OutName, int32& OutAmount) {
}


