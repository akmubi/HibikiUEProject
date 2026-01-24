#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkItemObject.h"
#include "HbkItemObj_RhythmPower.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_RhythmPower : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PowerTag;
    
    UHbkItemObj_RhythmPower();

};

