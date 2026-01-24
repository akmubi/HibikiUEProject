#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramCharaPostStateManager.generated.h"

class UHbkHologramCharaPostDataManager;
class UHbkHologramCharaPostState;

UCLASS(Blueprintable, Transient)
class UHbkHologramCharaPostStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostDataManager* DataManager;
    
public:
    UHbkHologramCharaPostStateManager();

};

