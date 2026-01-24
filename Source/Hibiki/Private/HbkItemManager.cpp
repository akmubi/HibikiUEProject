#include "HbkItemManager.h"
#include "Templates/SubclassOf.h"

UHbkItemManager::UHbkItemManager() {
    this->ItemTicketDT = NULL;
}

int32 UHbkItemManager::UseItemByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects) {
    return 0;
}

int32 UHbkItemManager::UseItemByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTickets, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects) {
    return 0;
}

AHbkItemBase* UHbkItemManager::SpawnItemDirect(UObject* WorldContextObject, const TSubclassOf<UHbkItemObject>& ItemClass, const FTransform& SpawnTransform, TSubclassOf<AActor> OverrideActorClass) {
    return NULL;
}

int32 UHbkItemManager::SpawnItemByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, const FTransform& SpawnTransform, TArray<AHbkItemBase*>& OutSpawnedItems) {
    return 0;
}

int32 UHbkItemManager::SpawnItemByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTicket, const FTransform& SpawnTransform, TArray<AHbkItemBase*>& OutSpawnedItems) {
    return 0;
}

int32 UHbkItemManager::GetCountRegisteredItems(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTicket, const TSubclassOf<UHbkItemObject>& ItemClass) {
    return 0;
}

int32 UHbkItemManager::ExchangeItemObjectByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects) {
    return 0;
}

int32 UHbkItemManager::ExchangeItemObjectByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTickets, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects) {
    return 0;
}


