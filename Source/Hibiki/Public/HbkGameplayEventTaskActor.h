#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTaskActor.h"
#include "HbkGameplayEventTaskActor.generated.h"

class UHbkGameplayEventAssetData;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGameplayEventTaskActor : public AHbkGameplayTaskActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayEventAssetData* GameplayEventAssetInfo;
    
public:
    AHbkGameplayEventTaskActor(const FObjectInitializer& ObjectInitializer);

};

