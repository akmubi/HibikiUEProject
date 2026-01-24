#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkGameEventManager.generated.h"

class AHbkInitializeTaskActor;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameEventManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkInitializeTaskActor> InitializeTaskActorBP;
    
public:
    UHbkGameEventManager();

    UFUNCTION(BlueprintCallable)
    bool IsGameplayTaskActor(UClass* TaskActorClass);
    
};

