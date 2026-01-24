#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkItemTicket.h"
#include "HbkMultiItemTickets.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkItemManager.generated.h"

class AActor;
class AHbkItemBase;
class UDataTable;
class UHbkItemObject;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemTicketDT;
    
public:
    UHbkItemManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 UseItemByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 UseItemByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTickets, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AHbkItemBase* SpawnItemDirect(UObject* WorldContextObject, const TSubclassOf<UHbkItemObject>& ItemClass, const FTransform& SpawnTransform, TSubclassOf<AActor> OverrideActorClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SpawnItemByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, const FTransform& SpawnTransform, TArray<AHbkItemBase*>& OutSpawnedItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SpawnItemByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTicket, const FTransform& SpawnTransform, TArray<AHbkItemBase*>& OutSpawnedItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCountRegisteredItems(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTicket, const TSubclassOf<UHbkItemObject>& ItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 ExchangeItemObjectByTicket(UObject* WorldContextObject, const FHbkItemTicket& ItemTicket, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 ExchangeItemObjectByMultiTickets(UObject* WorldContextObject, const FHbkMultiItemTickets& MultiItemTickets, TArray<TSubclassOf<UHbkItemObject>>& OutItemObjects);
    
};

